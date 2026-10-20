/* Program 052: Sum of Even and Odd Digits
 * Topic: loops and conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, digit, even_sum = 0, odd_sum = 0;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        if (digit % 2 == 0) even_sum += digit; else odd_sum += digit;
        n /= 10;
    }
    printf("Even digit sum = %d\nOdd digit sum = %d\n", even_sum, odd_sum);
    return 0;
}
