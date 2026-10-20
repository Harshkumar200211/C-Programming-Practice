/* Program 081: Check Palindrome String
 * Topic: string comparison
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char text[100];
    int i = 0, j, palindrome = 1;
    printf("Enter one word: ");
    scanf("%99s", text);
    while (text[i] != '\0') i++;
    j = i - 1;
    for (i = 0; i < j; i++, j--) if (text[i] != text[j]) palindrome = 0;
    if (palindrome) printf("Palindrome string\n");
    else printf("Not a palindrome string\n");
    return 0;
}
