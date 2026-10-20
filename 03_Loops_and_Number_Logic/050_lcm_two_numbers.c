/* Program 050: LCM of Two Numbers
 * Topic: GCD and arithmetic
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a, b, x, y, remainder, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    x = a; y = b;
    while (y != 0) { remainder = x % y; x = y; y = remainder; }
    gcd = x;
    if (a == 0 || b == 0) printf("LCM = 0\n");
    else printf("LCM = %d\n", (a / gcd) * b);
    return 0;
}
