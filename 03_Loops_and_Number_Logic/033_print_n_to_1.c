/* Program 033: Print Numbers from N to 1
 * Topic: decreasing for loop
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) printf("%d ", i);
    printf("\n");
    return 0;
}
