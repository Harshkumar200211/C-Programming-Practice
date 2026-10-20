/* Program 014: Compound Interest
 * Topic: loop and arithmetic formula
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    double principal, rate, amount;
    int years, i;
    printf("Enter principal, annual rate, and years: ");
    scanf("%lf %lf %d", &principal, &rate, &years);
    amount = principal;
    for (i = 0; i < years; i++) amount *= 1.0 + rate / 100.0;
    printf("Amount = %.2f\nCompound Interest = %.2f\n", amount, amount - principal);
    return 0;
}
