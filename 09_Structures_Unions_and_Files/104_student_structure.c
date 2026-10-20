/* Program 104: Student Details Using a Structure
 * Topic: structures
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    struct Student { char name[50]; int age; float marks; } student;
    printf("Enter name, age, and marks: ");
    scanf("%49s %d %f", student.name, &student.age, &student.marks);
    printf("Name = %s\nAge = %d\nMarks = %.2f\n", student.name, student.age, student.marks);
    return 0;
}
