/* Program 032: Print Numbers from 1 to N
 * Topic: for loop
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) printf("%d ", i);
    printf("\n");
    return 0;
}
