/* Program 077: Copy a String
 * Topic: character arrays
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char original[100], copy[100];
    int i = 0;
    printf("Enter one word: ");
    scanf("%99s", original);
    while (original[i] != '\0') { copy[i] = original[i]; i++; }
    copy[i] = '\0';
    printf("Copied string = %s\n", copy);
    return 0;
}
