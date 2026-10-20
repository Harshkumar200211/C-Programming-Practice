/* Program 071: Bubble Sort
 * Topic: sorting and nested loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Invalid size\n"); return 0; }
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) { temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp; }
    printf("Sorted: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
