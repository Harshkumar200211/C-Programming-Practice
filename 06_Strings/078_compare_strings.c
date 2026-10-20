/* Program 078: Compare Two Strings
 * Topic: string comparison
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char first[100], second[100];
    int i = 0, same = 1;
    printf("Enter two words: ");
    scanf("%99s %99s", first, second);
    while (first[i] != '\0' || second[i] != '\0')
    {
        if (first[i] != second[i]) { same = 0; break; }
        i++;
    }
    if (same) printf("Strings are equal\n");
    else printf("Strings are different\n");
    return 0;
}
