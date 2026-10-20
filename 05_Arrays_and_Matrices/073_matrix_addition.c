/* Program 073: Add Two 2x2 Matrices
 * Topic: two-dimensional arrays
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], i, j;
    printf("Enter four values for each matrix: ");
    for (i = 0; i < 2; i++) for (j = 0; j < 2; j++) scanf("%d", &a[i][j]);
    for (i = 0; i < 2; i++) for (j = 0; j < 2; j++) scanf("%d", &b[i][j]);
    printf("Sum matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++) printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}
