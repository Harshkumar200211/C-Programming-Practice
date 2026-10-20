/* Program 038: Factorial of a Number
 * Topic: loop and accumulator
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long fact = 1;
    printf("Enter a number from 0 to 20: ");
    scanf("%d", &n);
    if (n < 0 || n > 20) printf("Enter a value from 0 to 20.\n");
    else
    {
        for (i = 1; i <= n; i++) fact *= (unsigned long long)i;
        printf("Factorial = %llu\n", fact);
    }
    return 0;
}
