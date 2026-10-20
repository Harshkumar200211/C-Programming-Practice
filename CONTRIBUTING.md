# Contributing Guide

Thank you for helping improve this beginner-friendly C repository.

## Before submitting a change

1. Use clear names and keep the code suitable for beginners.
2. Use `int main()` for program entry points.
3. Give each numbered exercise one focused learning goal.
4. Add a short comment describing the topic, keep input handling simple, and show helpful output.
5. Compile with GCC in C11 mode and run at least one sample input.
6. Update the README index and smoke-test manifest when adding or changing a numbered program.

## Compile an example

```bash
gcc -std=c11 -Wall -Wextra path/to/example.c -o example
./example
```

Please avoid large changes to program numbering without updating all matching source links and test cases.
