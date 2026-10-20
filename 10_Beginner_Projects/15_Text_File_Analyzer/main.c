/* Text File Analyzer
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    char text[200];
    FILE *file;
    int i, words = 0, in_word = 0, characters = 0;
    printf("Enter a short sentence: ");
    scanf(" %199[^\n]", text);
    file = fopen("notes.txt", "w");
    if (file == NULL) { printf("Could not create file.\n"); return 0; }
    fprintf(file, "%s", text);
    fclose(file);
    file = fopen("notes.txt", "r");
    if (file == NULL) { printf("Could not read file.\n"); return 0; }
    while ((i = fgetc(file)) != EOF)
    {
        characters++;
        if (i == ' ' || i == '\n' || i == '\t') in_word = 0;
        else if (!in_word) { words++; in_word = 1; }
    }
    fclose(file);
    printf("Words = %d\nCharacters = %d\n", words, characters);
    return 0;
}
