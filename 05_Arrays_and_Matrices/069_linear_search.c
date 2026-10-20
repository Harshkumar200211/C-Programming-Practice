/* Program 069: Linear Search
 * Topic: array searching
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[100], n, i, target, position = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Invalid size\n"); return 0; }
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter value to search: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) if (a[i] == target) { position = i; break; }
    if (position >= 0) printf("Found at index = %d\n", position);
    else printf("Not found\n");
    return 0;
}
