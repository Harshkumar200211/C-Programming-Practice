/* Program 044: Print Prime Numbers up to N
 * Topic: nested loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, number, i, prime;
    printf("Enter N: ");
    scanf("%d", &n);
    for (number = 2; number <= n; number++)
    {
        prime = 1;
        for (i = 2; i <= number / i; i++)
            if (number % i == 0) { prime = 0; break; }
        if (prime) printf("%d ", number);
    }
    printf("\n");
    return 0;
}
