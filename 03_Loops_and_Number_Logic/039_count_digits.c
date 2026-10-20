/* Program 039: Count Digits in an Integer
 * Topic: while loop
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0) count = 1;
    while (n != 0) { count++; n /= 10; }
    printf("Digits = %d\n", count);
    return 0;
}
