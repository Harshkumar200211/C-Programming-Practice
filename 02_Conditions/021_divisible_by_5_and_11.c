/* Program 021: Divisible by 5 and 11
 * Topic: logical operators
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 5 == 0 && number % 11 == 0) printf("Divisible by both 5 and 11\n");
    else printf("Not divisible by both 5 and 11\n");
    return 0;
}
