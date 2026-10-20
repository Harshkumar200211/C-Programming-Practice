/* Program 020: Largest of Three Numbers
 * Topic: compound conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) printf("Largest = %d\n", a);
    else if (b >= a && b >= c) printf("Largest = %d\n", b);
    else printf("Largest = %d\n", c);
    return 0;
}
