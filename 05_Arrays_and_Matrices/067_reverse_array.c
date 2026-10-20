/* Program 067: Reverse an Array
 * Topic: arrays and loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Invalid size\n"); return 0; }
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
