/* Employee Payroll System
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    char name[50];
    float basic, hra, allowance, deduction, gross, net;
    printf("Enter employee name and basic salary: ");
    scanf("%49s %f", name, &basic);
    if (basic < 0) printf("Salary cannot be negative.\n");
    else
    {
        hra = basic * 0.20f;
        allowance = basic * 0.10f;
        deduction = basic * 0.05f;
        gross = basic + hra + allowance;
        net = gross - deduction;
        printf("Employee = %s\nGross salary = %.2f\nTake-home pay = %.2f\n", name, gross, net);
    }
    return 0;
}
