/* Program 095: Demonstrate Call by Value
 * Topic: function arguments
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int increase_by_ten(int value)
{
    return value + 10;
}

int main()
{
    int number = 5;
    printf("Original before function = %d\n", number);
    printf("Returned value = %d\n", increase_by_ten(number));
    printf("Original after function = %d\n", number);
    return 0;
}
