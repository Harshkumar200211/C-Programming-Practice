/* Program 083: Count Spaces in a Sentence
 * Topic: string traversal
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char text[200];
    int i, spaces = 0;
    printf("Enter a sentence: ");
    scanf(" %199[^\n]", text);
    for (i = 0; text[i] != '\0'; i++) if (text[i] == ' ') spaces++;
    printf("Spaces = %d\n", spaces);
    return 0;
}
