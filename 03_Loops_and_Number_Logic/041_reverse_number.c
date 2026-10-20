/* Program 041: Reverse a Number
 * Topic: while loop
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, digit, reversed = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n > 0) { digit = n % 10; reversed = reversed * 10 + digit; n /= 10; }
    printf("Reversed = %d\n", reversed);
    return 0;
}
