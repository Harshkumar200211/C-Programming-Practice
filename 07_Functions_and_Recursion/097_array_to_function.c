/* Program 097: Pass an Array to a Function
 * Topic: arrays and functions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int array_sum(int values[], int length)
{
    int i, sum = 0;
    for (i = 0; i < length; i++) sum += values[i];
    return sum;
}

int main()
{
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Invalid size\n"); return 0; }
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Sum = %d\n", array_sum(a, n));
    return 0;
}
