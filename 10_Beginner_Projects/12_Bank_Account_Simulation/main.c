/* Bank Account Simulation
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    int choice;
    float balance = 1000.0f, amount;
    printf("Starting balance = %.2f\n1. Deposit\n2. Withdraw\nChoose: ", balance);
    scanf("%d", &choice);
    printf("Enter amount: ");
    scanf("%f", &amount);
    if (amount <= 0) printf("Amount must be positive.\n");
    else if (choice == 1) balance += amount;
    else if (choice == 2 && amount <= balance) balance -= amount;
    else if (choice == 2) printf("Insufficient balance.\n");
    else printf("Invalid choice.\n");
    printf("Balance = %.2f\n", balance);
    return 0;
}
