/* Expense Tracker
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    float expenses[100], total = 0.0f;
    int n, i;
    printf("How many expenses (1 to 100)? ");
    scanf("%d", &n);
    if (n < 1 || n > 100) printf("Invalid count\n");
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Expense %d: ", i + 1);
            scanf("%f", &expenses[i]);
            total += expenses[i];
        }
        printf("Total = %.2f\nAverage = %.2f\n", total, total / n);
    }
    return 0;
}
