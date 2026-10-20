/* Unit Converter
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    int choice;
    float value;
    printf("1. Centimetres to metres\n2. Celsius to Fahrenheit\nChoose: ");
    scanf("%d", &choice);
    printf("Enter value: ");
    scanf("%f", &value);
    switch (choice)
    {
        case 1: printf("Metres = %.2f\n", value / 100.0f); break;
        case 2: printf("Fahrenheit = %.2f\n", value * 9.0f / 5.0f + 32.0f); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
