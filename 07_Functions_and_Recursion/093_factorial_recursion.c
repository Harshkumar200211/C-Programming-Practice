/* Program 093: Factorial Using Recursion
 * Topic: recursive functions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

unsigned long long factorial_recursive(int n)
{
    if (n <= 1) return 1;
    return (unsigned long long)n * factorial_recursive(n - 1);
}

int main()
{
    int n;
    printf("Enter a number from 0 to 20: ");
    scanf("%d", &n);
    if (n < 0 || n > 20) printf("Invalid input\n");
    else printf("Factorial = %llu\n", factorial_recursive(n));
    return 0;
}
