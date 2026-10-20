/* Program 087: Check Whether Two Words Are Anagrams
 * Topic: character frequency arrays
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char first[100], second[100];
    int count[256] = {0}, i, same = 1;
    printf("Enter two words: ");
    scanf("%99s %99s", first, second);
    for (i = 0; first[i] != '\0'; i++) count[(unsigned char)first[i]]++;
    for (i = 0; second[i] != '\0'; i++) count[(unsigned char)second[i]]--;
    for (i = 0; i < 256; i++) if (count[i] != 0) same = 0;
    if (same) printf("Anagrams\n"); else printf("Not anagrams\n");
    return 0;
}
