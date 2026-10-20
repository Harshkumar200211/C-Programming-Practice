/* Program 101: Access Array Elements Using a Pointer
 * Topic: pointers and arrays
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int values[4] = {2, 4, 6, 8};
    int *pointer = values;
    int i;
    for (i = 0; i < 4; i++) printf("%d ", *(pointer + i));
    printf("\n");
    return 0;
}
