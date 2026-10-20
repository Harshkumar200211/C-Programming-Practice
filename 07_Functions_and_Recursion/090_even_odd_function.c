/* Program 090: Check Even or Odd Using a Function
 * Topic: functions and conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int is_even(int number)
{
    return number % 2 == 0;
}

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (is_even(n)) printf("Even\n"); else printf("Odd\n");
    return 0;
}
