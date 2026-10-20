/* Student Record Manager
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    struct Student { char name[50]; float marks; } students[20];
    int count = 0, choice, i;
    do
    {
        printf("\n1. Add student\n2. View students\n3. Exit\nChoose: ");
        scanf("%d", &choice);
        if (choice == 1 && count < 20)
        {
            printf("Enter name and marks: ");
            scanf("%49s %f", students[count].name, &students[count].marks);
            count++;
            printf("Student added.\n");
        }
        else if (choice == 2)
        {
            if (count == 0) printf("No records yet.\n");
            for (i = 0; i < count; i++) printf("%s : %.1f\n", students[i].name, students[i].marks);
        }
        else if (choice != 3) printf("Invalid choice or record limit reached.\n");
    } while (choice != 3);
    return 0;
}
