from __future__ import annotations

import json
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
MANIFEST = ROOT / ".github" / "scripts" / "smoke_cases.json"


def run_command(command: list[str], *, input_text: str = "", cwd: Path, timeout: int = 5) -> subprocess.CompletedProcess[str]:
    return subprocess.run(
        command,
        input=input_text,
        text=True,
        capture_output=True,
        cwd=cwd,
        timeout=timeout,
        check=False,
    )


def main() -> int:
    if not MANIFEST.exists():
        print("ERROR: smoke test manifest is missing.")
        return 1
    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
    cases = manifest["numberedPrograms"] + manifest["projects"]
    sources = sorted(
        path for path in ROOT.rglob("*.c")
        if ".git" not in path.parts and "build" not in path.parts and ".build" not in path.parts
    )
    if len(manifest["numberedPrograms"]) != 110:
        print(f"ERROR: expected 110 numbered tests, found {len(manifest['numberedPrograms'])}.")
        return 1
    if len(manifest["projects"]) != 15:
        print(f"ERROR: expected 15 project tests, found {len(manifest['projects'])}.")
        return 1
    source_names = {path.relative_to(ROOT).as_posix() for path in sources}
    case_names = {case["path"] for case in cases}
    if source_names != case_names:
        missing_cases = sorted(source_names - case_names)
        missing_sources = sorted(case_names - source_names)
        print(f"ERROR: test/source mismatch. Untested sources: {missing_cases}; missing sources: {missing_sources}")
        return 1

    failures: list[str] = []
    print(f"Found {len(sources)} C files. Compiling with GCC C11...")
    with tempfile.TemporaryDirectory(prefix="c-practice-tests-") as temp:
        build_dir = Path(temp) / "bin"
        build_dir.mkdir()
        run_root = Path(temp) / "runs"
        run_root.mkdir()
        binaries: dict[str, Path] = {}
        for index, source in enumerate(sources):
            relative = source.relative_to(ROOT).as_posix()
            binary = build_dir / f"program_{index}"
            result = run_command(
                ["gcc", "-std=c11", "-Wall", "-Wextra", "-Wpedantic", str(source), "-o", str(binary)],
                cwd=ROOT,
                timeout=10,
            )
            if result.returncode != 0:
                failures.append(f"COMPILE {relative}:\n{result.stderr.strip()}")
            else:
                binaries[relative] = binary

        if failures:
            for failure in failures:
                print(f"\n{failure}")
            print(f"Compilation failed for {len(failures)} source file(s).")
            return 1

        print("All C files compiled. Running numbered-program and project smoke tests...")
        passed = 0
        for index, case in enumerate(cases):
            relative = case["path"]
            binary = binaries[relative]
            work_dir = run_root / f"case_{index}"
            work_dir.mkdir()
            try:
                result = run_command([str(binary)], input_text=case.get("input", ""), cwd=work_dir, timeout=5)
            except subprocess.TimeoutExpired:
                failures.append(f"TIMEOUT {relative}")
                continue
            combined_output = result.stdout + result.stderr
            if result.returncode != 0:
                failures.append(f"EXIT {relative}: exit code {result.returncode}; output: {combined_output.strip()}")
            elif case.get("expected") and case["expected"] not in combined_output:
                failures.append(
                    f"OUTPUT {relative}: expected fragment {case['expected']!r}; got {combined_output.strip()!r}"
                )
            else:
                passed += 1

        if failures:
            for failure in failures:
                print(f"\n{failure}")
            print(f"FAILED: {passed}/{len(cases)} sample tests passed; {len(failures)} failed.")
            return 1

    print(f"SUCCESS: compiled {len(sources)} C files; {passed}/{len(cases)} smoke tests passed.")
    print("Note: sample smoke tests are not exhaustive tests of every possible input.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
