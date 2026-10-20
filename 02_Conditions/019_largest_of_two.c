/* Program 019: Largest of Two Numbers
 * Topic: if-else
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a >= b) printf("Largest = %d\n", a);
    else printf("Largest = %d\n", b);
    return 0;
}
