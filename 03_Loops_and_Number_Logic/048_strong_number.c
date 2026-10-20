/* Program 048: Check Strong Number
 * Topic: digit factorial and loops
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int n, temp, digit, fact, i, sum = 0;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    temp = n;
    do
    {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) fact *= i;
        sum += fact;
        temp /= 10;
    } while (temp > 0);
    if (n >= 0 && sum == n) printf("Strong number\n");
    else printf("Not a strong number\n");
    return 0;
}
