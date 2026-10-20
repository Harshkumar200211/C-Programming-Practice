/* Program 107: Demonstrate a Union
 * Topic: union memory sharing
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    union Data { int integer; float decimal; } data;
    data.integer = 25;
    printf("Integer value = %d\n", data.integer);
    data.decimal = 3.5f;
    printf("Float value = %.1f\n", data.decimal);
    printf("A union shares memory between its members.\n");
    return 0;
}
