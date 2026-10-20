/* Program 091: Check Prime Number Using a Function
 * Topic: functions and loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int is_prime(int n)
{
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= n / i; i++) if (n % i == 0) return 0;
    return 1;
}

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (is_prime(n)) printf("Prime number\n"); else printf("Not a prime number\n");
    return 0;
}
