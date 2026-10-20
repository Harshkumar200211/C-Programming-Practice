/* Program 108: Demonstrate an Enumeration
 * Topic: enum constants
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    enum Day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
    enum Day today = WEDNESDAY;
    printf("WEDNESDAY value = %d\n", today);
    printf("FRIDAY value = %d\n", FRIDAY);
    return 0;
}
