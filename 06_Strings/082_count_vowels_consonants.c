/* Program 082: Count Vowels and Consonants
 * Topic: string conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char text[100], ch;
    int i = 0, vowels = 0, consonants = 0;
    printf("Enter one word: ");
    scanf("%99s", text);
    while (text[i] != '\0')
    {
        ch = text[i];
        if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        }
        i++;
    }
    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
