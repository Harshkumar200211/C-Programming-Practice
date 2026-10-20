/* Program 075: Multiply Two 2x2 Matrices
 * Topic: nested loops and matrices
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2] = {{0, 0}, {0, 0}}, i, j, k;
    printf("Enter four values for each matrix: ");
    for (i = 0; i < 2; i++) for (j = 0; j < 2; j++) scanf("%d", &a[i][j]);
    for (i = 0; i < 2; i++) for (j = 0; j < 2; j++) scanf("%d", &b[i][j]);
    for (i = 0; i < 2; i++) for (j = 0; j < 2; j++) for (k = 0; k < 2; k++) c[i][j] += a[i][k] * b[k][j];
    printf("Product matrix:\n");
    for (i = 0; i < 2; i++) { for (j = 0; j < 2; j++) printf("%d ", c[i][j]); printf("\n"); }
    return 0;
}
