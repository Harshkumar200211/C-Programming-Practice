/* Program 024: Alphabet Digit or Special Character
 * Topic: character classification
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) printf("Alphabet\n");
    else if (ch >= '0' && ch <= '9') printf("Digit\n");
    else printf("Special character\n");
    return 0;
}
