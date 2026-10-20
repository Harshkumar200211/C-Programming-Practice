/* Inventory and Billing System
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    int n, i, quantity;
    float price, total = 0.0f;
    printf("Number of different items (1 to 50): ");
    scanf("%d", &n);
    if (n < 1 || n > 50) printf("Invalid item count\n");
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("Enter price and quantity for item %d: ", i);
            scanf("%f %d", &price, &quantity);
            if (price >= 0 && quantity >= 0) total += price * quantity;
        }
        printf("Bill total = %.2f\n", total);
    }
    return 0;
}
