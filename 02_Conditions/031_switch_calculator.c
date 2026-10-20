/* Program 031: Simple Calculator Using switch
 * Topic: switch-case
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    double a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    switch (op)
    {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/':
            if (b != 0) printf("Result = %.2f\n", a / b);
            else printf("Cannot divide by zero.\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
