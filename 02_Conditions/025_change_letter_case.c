/* Program 025: Uppercase and Lowercase Conversion
 * Topic: ASCII values
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if (ch >= 'a' && ch <= 'z') printf("Uppercase = %c\n", ch - 'a' + 'A');
    else if (ch >= 'A' && ch <= 'Z') printf("Lowercase = %c\n", ch - 'A' + 'a');
    else printf("Not an alphabet\n");
    return 0;
}
