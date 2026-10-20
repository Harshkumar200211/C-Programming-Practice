/* Program 070: Binary Search in a Sorted Array
 * Topic: binary search
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[100], n, i, target, low = 0, high, mid, position = -1;
    printf("Enter sorted array size: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Invalid size\n"); return 0; }
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value to search: ");
    scanf("%d", &target);
    high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (a[mid] == target) { position = mid; break; }
        if (a[mid] < target) low = mid + 1; else high = mid - 1;
    }
    if (position >= 0) printf("Found at index = %d\n", position);
    else printf("Not found\n");
    return 0;
}
