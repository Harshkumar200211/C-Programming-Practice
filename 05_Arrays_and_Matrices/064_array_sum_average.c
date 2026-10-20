/* Program 064: Sum and Average of Array Elements
 * Topic: arrays and accumulator
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Invalid size\n"); return 0; }
    for (i = 0; i < n; i++) { scanf("%d", &a[i]); sum += a[i]; }
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (double)sum / n);
    return 0;
}
