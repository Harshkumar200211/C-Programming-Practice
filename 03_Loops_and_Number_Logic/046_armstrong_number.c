/* Program 046: Check Armstrong Number
 * Topic: digit extraction and integer power
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, original, temp, digits = 0, digit, sum = 0, power, i;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    original = n;
    temp = n;
    do { digits++; temp /= 10; } while (temp != 0);
    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;
        for (i = 0; i < digits; i++) power *= digit;
        sum += power;
        temp /= 10;
    }
    if (n >= 0 && sum == original) printf("Armstrong number\n");
    else printf("Not an Armstrong number\n");
    return 0;
}
