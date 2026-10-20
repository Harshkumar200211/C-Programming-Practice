/* Program 084: Count Words in a Sentence
 * Topic: strings and conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char text[200];
    int i, words = 0, inside_word = 0;
    printf("Enter a sentence: ");
    scanf(" %199[^\n]", text);
    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] != ' ' && text[i] != '\t')
        { if (!inside_word) words++; inside_word = 1; }
        else inside_word = 0;
    }
    printf("Words = %d\n", words);
    return 0;
}
