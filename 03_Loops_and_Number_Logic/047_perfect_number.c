/* Program 047: Check Perfect Number
 * Topic: loops and divisors
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++) if (n > 0 && n % i == 0) sum += i;
    if (n > 1 && sum == n) printf("Perfect number\n");
    else printf("Not a perfect number\n");
    return 0;
}
