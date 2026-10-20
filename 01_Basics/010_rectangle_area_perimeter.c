/* Program 010: Area and Perimeter of a Rectangle
 * Topic: arithmetic
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    float length, width;
    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    printf("Area = %.2f\nPerimeter = %.2f\n", length * width, 2 * (length + width));
    return 0;
}
