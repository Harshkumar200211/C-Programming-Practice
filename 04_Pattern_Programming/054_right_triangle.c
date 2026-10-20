/* Program 054: Right-Angled Star Triangle
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
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++) printf("*");
        printf("\n");
    }
    return 0;
}
