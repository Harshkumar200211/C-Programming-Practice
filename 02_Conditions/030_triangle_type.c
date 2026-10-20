/* Program 030: Identify Triangle Type
 * Topic: nested conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three side lengths: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) printf("Invalid triangle\n");
    else if (a == b && b == c) printf("Equilateral triangle\n");
    else if (a == b || a == c || b == c) printf("Isosceles triangle\n");
    else printf("Scalene triangle\n");
    return 0;
}
