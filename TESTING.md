# Testing Guide

## Automated checks

The GitHub Actions workflow runs `.github/scripts/check_repository.py`. It:

1. Finds and compiles every C source file using GCC with `-std=c11 -Wall -Wextra -Wpedantic`.
2. Runs a sample-input smoke test for each of the 110 numbered programs.
3. Runs a sample-input smoke test for each of the 15 beginner projects.
4. Reports compilation errors, timeouts, non-zero exits, and missing expected output.

## Run locally

Python 3 and GCC must be installed. From the repository root, run:

```bash
python .github/scripts/check_repository.py
```

The smoke tests use representative inputs; they do not cover every possible edge case. Test additional inputs when changing logic, especially invalid input, boundary values, empty data, and division by zero.
