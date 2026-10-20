/* Program 058: Diamond Star Pattern
 * Topic: nested loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Enter half-height (1 to 10): ");
    scanf("%d", &n);
    if (n > 10) n = 10;
    for (row = 1; row <= n; row++)
    {
        for (col = row; col < n; col++) printf(" ");
        for (col = 1; col <= 2 * row - 1; col++) printf("*");
        printf("\n");
    }
    for (row = n - 1; row >= 1; row--)
    {
        for (col = row; col < n; col++) printf(" ");
        for (col = 1; col <= 2 * row - 1; col++) printf("*");
        printf("\n");
    }
    return 0;
}
