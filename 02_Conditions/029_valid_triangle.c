/* Program 029: Check Whether a Triangle Is Valid
 * Topic: logical operators
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three side lengths: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) printf("Valid triangle\n");
    else printf("Invalid triangle\n");
    return 0;
}
