/* Program 059: Hollow Square Pattern
 * Topic: nested loops and conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Enter pattern size (2 to 20): ");
    scanf("%d", &n);
    if (n < 2) n = 2;
    if (n > 20) n = 20;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
            if (row == 1 || row == n || col == 1 || col == n) printf("*");
            else printf(" ");
        printf("\n");
    }
    return 0;
}
