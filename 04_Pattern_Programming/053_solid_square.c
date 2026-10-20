/* Program 053: Solid Square Star Pattern
 * Topic: nested loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Enter pattern size (1 to 20): ");
    scanf("%d", &n);
    if (n > 20) n = 20;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++) printf("*");
        printf("\n");
    }
    return 0;
}
