/* Program 088: Add Two Numbers Using a Function
 * Topic: user-defined functions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int add_numbers(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", add_numbers(a, b));
    return 0;
}
