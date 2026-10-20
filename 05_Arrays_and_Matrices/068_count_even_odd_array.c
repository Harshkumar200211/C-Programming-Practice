/* Program 068: Count Even and Odd Array Elements
 * Topic: arrays and conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a[100], n, i, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) { printf("Invalid size\n"); return 0; }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) even++; else odd++;
    }
    printf("Even count = %d\nOdd count = %d\n", even, odd);
    return 0;
}
