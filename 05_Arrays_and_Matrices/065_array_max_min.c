/* Program 065: Largest and Smallest Element in an Array
 * Topic: array traversal
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[100], n, i, largest, smallest;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Invalid size\n"); return 0; }
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    largest = smallest = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > largest) largest = a[i];
        if (a[i] < smallest) smallest = a[i];
    }
    printf("Largest = %d\nSmallest = %d\n", largest, smallest);
    return 0;
}
