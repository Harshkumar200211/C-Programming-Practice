/* Program 023: Vowel or Consonant
 * Topic: character conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char letter;
    printf("Enter an alphabet: ");
    scanf(" %c", &letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
        printf("Vowel\n");
    else printf("Consonant (or not a letter)\n");
    return 0;
}
