/* Program 049: GCD of Two Numbers
 * Topic: Euclidean algorithm
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a, b, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) { remainder = a % b; a = b; b = remainder; }
    printf("GCD = %d\n", a);
    return 0;
}
