/* Program 045: Fibonacci Series
 * Topic: loop and variables
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, i;
    long long first = 0, second = 1, next;
    printf("How many terms (1 to 90)? ");
    scanf("%d", &n);
    if (n < 1 || n > 90) printf("Enter a value from 1 to 90.\n");
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("%lld ", first);
            next = first + second;
            first = second;
            second = next;
        }
        printf("\n");
    }
    return 0;
}
