/* Program 066: Second Largest Distinct Element
 * Topic: array traversal
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[100], n, i, largest, second = 0, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 2 || n > 100) { printf("Enter 2 to 100 elements.\n"); return 0; }
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    largest = a[0];
    for (i = 1; i < n; i++) if (a[i] > largest) largest = a[i];
    for (i = 0; i < n; i++)
        if (a[i] < largest && (!found || a[i] > second)) { second = a[i]; found = 1; }
    if (found) printf("Second largest = %d\n", second);
    else printf("No second distinct value\n");
    return 0;
}
