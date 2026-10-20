/* Program 080: Reverse a String
 * Topic: strings and loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char text[100], temp;
    int i = 0, j;
    printf("Enter one word: ");
    scanf("%99s", text);
    while (text[i] != '\0') i++;
    j = i - 1;
    for (i = 0; i < j; i++, j--) { temp = text[i]; text[i] = text[j]; text[j] = temp; }
    printf("Reversed = %s\n", text);
    return 0;
}
