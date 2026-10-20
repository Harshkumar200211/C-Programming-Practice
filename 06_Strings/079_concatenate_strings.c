/* Program 079: Concatenate Two Strings
 * Topic: string traversal
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char first[200], second[100];
    int i = 0, j = 0;
    printf("Enter two words: ");
    scanf("%99s %99s", first, second);
    while (first[i] != '\0') i++;
    while (second[j] != '\0') { first[i] = second[j]; i++; j++; }
    first[i] = '\0';
    printf("Concatenated string = %s\n", first);
    return 0;
}
