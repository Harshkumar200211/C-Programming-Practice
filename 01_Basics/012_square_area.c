/* Program 012: Area of a Square
 * Topic: arithmetic
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int side;
    printf("Enter side: ");
    scanf("%d", &side);
    printf("Area = %d\n", side * side);
    return 0;
}
