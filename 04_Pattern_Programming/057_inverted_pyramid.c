/* Program 057: Inverted Pyramid Star Pattern
 * Topic: nested loops and spaces
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    if (n > 20) n = 20;
    for (row = n; row >= 1; row--)
    {
        for (col = n; col > row; col--) printf(" ");
        for (col = 1; col <= 2 * row - 1; col++) printf("*");
        printf("\n");
    }
    return 0;
}
