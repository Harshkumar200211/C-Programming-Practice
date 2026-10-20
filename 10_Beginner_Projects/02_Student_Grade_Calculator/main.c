/* Student Grade Calculator
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    int a, b, c, total;
    float percentage;
    printf("Enter marks for three subjects (0 to 100): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100)
        printf("Invalid marks\n");
    else
    {
        total = a + b + c;
        percentage = total / 3.0f;
        printf("Total = %d\nPercentage = %.2f\n", total, percentage);
        if (percentage >= 80) printf("Grade = A\n");
        else if (percentage >= 60) printf("Grade = B\n");
        else if (percentage >= 40) printf("Grade = C\n");
        else printf("Grade = D\n");
    }
    return 0;
}
