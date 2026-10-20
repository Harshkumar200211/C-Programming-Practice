/* Program 003: Input and Display an Integer
 * Topic: variables and scanf
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Number = %d\n", number);
    return 0;
}
