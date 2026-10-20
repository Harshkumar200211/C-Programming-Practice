/* Program 027: Grade from Marks
 * Topic: if-else ladder
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks out of 100: ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100) printf("Invalid marks\n");
    else if (marks >= 80) printf("Grade = A\n");
    else if (marks >= 60) printf("Grade = B\n");
    else if (marks >= 40) printf("Grade = C\n");
    else printf("Grade = D\n");
    return 0;
}
