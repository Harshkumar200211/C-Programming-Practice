/* Program 076: Find String Length Without strlen
 * Topic: strings and loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char text[100];
    int i = 0;
    printf("Enter one word: ");
    scanf("%99s", text);
    while (text[i] != '\0') i++;
    printf("Length = %d\n", i);
    return 0;
}
