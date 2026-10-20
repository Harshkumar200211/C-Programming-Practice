/* Program 089: Largest Number Using a Function
 * Topic: functions and conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int largest_number(int a, int b)
{
    if (a > b) return a;
    return b;
}

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Largest = %d\n", largest_number(a, b));
    return 0;
}
