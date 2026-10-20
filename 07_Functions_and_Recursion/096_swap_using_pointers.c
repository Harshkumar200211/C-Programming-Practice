/* Program 096: Swap Two Numbers Using Pointers
 * Topic: pointers and functions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int swap_values(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 1;
}

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    swap_values(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
