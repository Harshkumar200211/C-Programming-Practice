/* Program 085: Count Frequency of a Character
 * Topic: strings and loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char text[100], target;
    int i, count = 0;
    printf("Enter a word and a character: ");
    scanf("%99s %c", text, &target);
    for (i = 0; text[i] != '\0'; i++) if (text[i] == target) count++;
    printf("Frequency = %d\n", count);
    return 0;
}
