/* Program 094: Fibonacci Series Using Recursion
 * Topic: recursive functions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;
    printf("How many terms (1 to 20)? ");
    scanf("%d", &n);
    if (n < 1 || n > 20) printf("Enter a value from 1 to 20.\n");
    else
    {
        for (i = 0; i < n; i++) printf("%d ", fibonacci(i));
        printf("\n");
    }
    return 0;
}
