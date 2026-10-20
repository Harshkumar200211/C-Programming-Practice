/* Program 110: Count Lines Words and Characters in a File
 * Topic: file reading and counting
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    FILE *file = fopen("sample.txt", "w");
    char text[] = "C is fun\nLearning C is useful.\n";
    int ch, lines = 0, words = 0, characters = 0, in_word = 0;
    if (file == NULL) { printf("Could not create file.\n"); return 0; }
    fputs(text, file);
    fclose(file);
    file = fopen("sample.txt", "r");
    if (file == NULL) { printf("Could not read file.\n"); return 0; }
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t') in_word = 0;
        else if (!in_word) { words++; in_word = 1; }
    }
    fclose(file);
    printf("Lines = %d\nWords = %d\nCharacters = %d\n", lines, words, characters);
    return 0;
}
