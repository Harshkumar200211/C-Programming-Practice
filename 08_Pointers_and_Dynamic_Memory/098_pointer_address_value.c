/* Program 098: Print Address and Value Using a Pointer
 * Topic: pointer basics
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int number = 25;
    int *pointer = &number;
    printf("Value = %d\n", *pointer);
    printf("Address = %p\n", (void *)pointer);
    return 0;
}
