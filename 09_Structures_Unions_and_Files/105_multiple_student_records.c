/* Program 105: Multiple Students Using an Array of Structures
 * Topic: arrays and structures
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    struct Student { char name[50]; float marks; } students[20];
    int n, i;
    printf("How many students (1 to 20)? ");
    scanf("%d", &n);
    if (n < 1 || n > 20) { printf("Invalid count\n"); return 0; }
    for (i = 0; i < n; i++)
    {
        printf("Enter name and marks for student %d: ", i + 1);
        scanf("%49s %f", students[i].name, &students[i].marks);
    }
    printf("Student list:\n");
    for (i = 0; i < n; i++) printf("%s: %.2f\n", students[i].name, students[i].marks);
    return 0;
}
