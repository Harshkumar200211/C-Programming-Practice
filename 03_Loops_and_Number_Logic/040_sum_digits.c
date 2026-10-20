/* Program 040: Sum of Digits
 * Topic: while loop and modulo
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, digit, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n > 0) { digit = n % 10; sum += digit; n /= 10; }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
