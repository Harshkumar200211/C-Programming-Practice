/* Program 034: Even Numbers from 1 to N
 * Topic: for loop and modulo
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2) printf("%d ", i);
    printf("\n");
    return 0;
}
