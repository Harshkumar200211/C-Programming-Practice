/* Program 109: Write Read and Append a Text File
 * Topic: file handling
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    FILE *file = fopen("sample.txt", "w");
    char line[100];
    if (file == NULL) { printf("Could not open file.\n"); return 0; }
    fprintf(file, "First line\n");
    fclose(file);
    printf("Enter one line to append: ");
    scanf(" %99[^\n]", line);
    file = fopen("sample.txt", "a");
    if (file == NULL) { printf("Could not open file.\n"); return 0; }
    fprintf(file, "%s\n", line);
    fclose(file);
    file = fopen("sample.txt", "r");
    if (file == NULL) { printf("Could not open file.\n"); return 0; }
    printf("File contents:\n");
    while (fgets(line, sizeof(line), file) != NULL) printf("%s", line);
    fclose(file);
    return 0;
}
