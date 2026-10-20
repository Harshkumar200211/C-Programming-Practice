/* Program 028: Pass or Fail
 * Topic: conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks out of 100: ");
    scanf("%d", &marks);
    if (marks >= 40 && marks <= 100) printf("Pass\n");
    else if (marks >= 0 && marks < 40) printf("Fail\n");
    else printf("Invalid marks\n");
    return 0;
}
