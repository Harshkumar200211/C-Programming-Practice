/* Program 043: Check Prime Number
 * Topic: loops and divisibility
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, i, prime = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 2) prime = 0;
    for (i = 2; i <= n / i && prime; i++) if (n % i == 0) prime = 0;
    if (prime) printf("Prime number\n");
    else printf("Not a prime number\n");
    return 0;
}
