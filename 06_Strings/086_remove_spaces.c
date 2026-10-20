/* Program 086: Remove Spaces from a Sentence
 * Topic: character arrays
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char text[200], result[200];
    int i, j = 0;
    printf("Enter a sentence: ");
    scanf(" %199[^\n]", text);
    for (i = 0; text[i] != '\0'; i++) if (text[i] != ' ') result[j++] = text[i];
    result[j] = '\0';
    printf("Without spaces = %s\n", result);
    return 0;
}
