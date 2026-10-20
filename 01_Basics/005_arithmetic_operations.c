/* Program 005: Basic Arithmetic Operations
 * Topic: arithmetic operators
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    if (b != 0) printf("Quotient = %.2f\n", (double)a / b);
    else printf("Cannot divide by zero.\n");
    return 0;
}
