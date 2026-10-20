/* Program 017: Check Even or Odd
 * Topic: if-else
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0) printf("Even\n");
    else printf("Odd\n");
    return 0;
}
