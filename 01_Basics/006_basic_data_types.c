/* Program 006: Input Integer Float and Character
 * Topic: basic data types
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int whole;
    float decimal;
    char letter;
    printf("Enter an integer, decimal, and character: ");
    scanf("%d %f %c", &whole, &decimal, &letter);
    printf("Integer = %d\nFloat = %.2f\nCharacter = %c\n", whole, decimal, letter);
    return 0;
}
