/* Program 036: Sum of First N Natural Numbers
 * Topic: accumulator loop
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) sum += i;
    printf("Sum = %d\n", sum);
    return 0;
}
