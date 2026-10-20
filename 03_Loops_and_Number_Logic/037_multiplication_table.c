/* Program 037: Multiplication Table
 * Topic: for loop
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}
