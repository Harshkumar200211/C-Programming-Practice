/* Program 009: Celsius to Fahrenheit
 * Topic: type conversion and arithmetic
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9.0f / 5.0f + 32.0f;
    printf("Fahrenheit = %.2f\n", fahrenheit);
    return 0;
}
