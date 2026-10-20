/* Program 099: Pointer Arithmetic
 * Topic: pointer increment
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int values[3] = {10, 20, 30};
    int *pointer = values;
    printf("First value = %d\n", *pointer);
    pointer++;
    printf("Second value = %d\n", *pointer);
    pointer++;
    printf("Third value = %d\n", *pointer);
    return 0;
}
