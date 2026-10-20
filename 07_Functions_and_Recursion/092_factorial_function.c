/* Program 092: Factorial Using a Function
 * Topic: functions and loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

unsigned long long factorial(int n)
{
    int i;
    unsigned long long result = 1;
    for (i = 1; i <= n; i++) result *= (unsigned long long)i;
    return result;
}

int main()
{
    int n;
    printf("Enter a number from 0 to 20: ");
    scanf("%d", &n);
    if (n < 0 || n > 20) printf("Invalid input\n");
    else printf("Factorial = %llu\n", factorial(n));
    return 0;
}
