/* Program 011: Area and Circumference of a Circle
 * Topic: constants and arithmetic
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    float radius;
    const float PI = 3.14159f;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area = %.2f\nCircumference = %.2f\n", PI * radius * radius, 2 * PI * radius);
    return 0;
}
