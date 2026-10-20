/* Program 013: Simple Interest
 * Topic: arithmetic formula
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    float principal, rate, time;
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    printf("Simple Interest = %.2f\n", principal * rate * time / 100.0f);
    return 0;
}
