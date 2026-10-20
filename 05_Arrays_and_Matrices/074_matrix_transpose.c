/* Program 074: Transpose a 2x2 Matrix
 * Topic: two-dimensional arrays
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[2][2], i, j;
    printf("Enter four matrix values: ");
    for (i = 0; i < 2; i++) for (j = 0; j < 2; j++) scanf("%d", &a[i][j]);
    printf("Transpose:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++) printf("%d ", a[j][i]);
        printf("\n");
    }
    return 0;
}
