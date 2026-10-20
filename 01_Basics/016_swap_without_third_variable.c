/* Program 016: Swap Two Numbers Without a Third Variable
 * Topic: arithmetic assignment
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    a = a + b; b = a - b; a = a - b;
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
