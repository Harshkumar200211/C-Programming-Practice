/* Program 015: Swap Two Numbers Using a Third Variable
 * Topic: temporary variable
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    temp = a; a = b; b = temp;
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
