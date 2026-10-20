/* Program 102: Access a String Using a Pointer
 * Topic: character pointers
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    char text[] = "C language";
    char *pointer = text;
    while (*pointer != '\0')
    {
        printf("%c", *pointer);
        pointer++;
    }
    printf("\n");
    return 0;
}
