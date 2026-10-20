/* Program 042: Check Palindrome Number
 * Topic: loops and comparison
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, original, digit, reversed = 0;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) { digit = n % 10; reversed = reversed * 10 + digit; n /= 10; }
    if (original >= 0 && original == reversed) printf("Palindrome number\n");
    else printf("Not a palindrome number\n");
    return 0;
}
