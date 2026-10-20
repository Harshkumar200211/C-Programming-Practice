/* Program 018: Positive Negative or Zero
 * Topic: if-else
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number > 0) printf("Positive\n");
    else if (number < 0) printf("Negative\n");
    else printf("Zero\n");
    return 0;
}
