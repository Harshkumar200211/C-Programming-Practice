/* Program 051: Calculate Power Using a Loop
 * Topic: multiplication and loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int base, exponent, i;
    long long result = 1;
    printf("Enter base and non-negative exponent: ");
    scanf("%d %d", &base, &exponent);
    if (exponent < 0 || exponent > 30) printf("Use an exponent from 0 to 30.\n");
    else
    {
        for (i = 0; i < exponent; i++) result *= base;
        printf("Power = %lld\n", result);
    }
    return 0;
}
