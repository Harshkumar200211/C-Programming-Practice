/* Program 061: Floyd's Triangle
 * Topic: nested loops and counter
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, row, col, number = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    if (n > 20) n = 20;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++) printf("%d ", number++);
        printf("\n");
    }
    return 0;
}
