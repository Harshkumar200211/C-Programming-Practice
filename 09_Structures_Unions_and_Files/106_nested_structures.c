/* Program 106: Nested Structures
 * Topic: structure inside a structure
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    struct Address { int house_number; char city[50]; };
    struct Student { char name[50]; struct Address address; } student;
    printf("Enter name, house number, and city: ");
    scanf("%49s %d %49s", student.name, &student.address.house_number, student.address.city);
    printf("Name = %s\n", student.name);
    printf("Address = House %d, %s\n", student.address.house_number, student.address.city);
    return 0;
}
