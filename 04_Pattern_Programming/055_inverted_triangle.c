/* Program 055: Inverted Star Triangle
 * Topic: nested loops
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
        for (col = 1; col <= row; col++) printf("*");
        printf("\n");
    }
    return 0;
}
