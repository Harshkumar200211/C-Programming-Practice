/* Program 008: ASCII Value of a Character
 * Topic: characters and integer conversion
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a character: ");
    scanf(" %c", &letter);
    printf("ASCII value = %d\n", (unsigned char)letter);
    return 0;
}
