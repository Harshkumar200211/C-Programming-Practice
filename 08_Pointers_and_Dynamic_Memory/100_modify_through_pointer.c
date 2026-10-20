/* Program 100: Modify a Value Through a Pointer
 * Topic: dereferencing pointers
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int number = 10;
    int *pointer = &number;
    printf("Before = %d\n", number);
    *pointer = 50;
    printf("After = %d\n", number);
    return 0;
}
