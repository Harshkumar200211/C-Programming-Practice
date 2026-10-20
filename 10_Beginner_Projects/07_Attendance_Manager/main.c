/* Attendance Manager
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    int total, present;
    printf("Enter total classes and classes attended: ");
    scanf("%d %d", &total, &present);
    if (total <= 0 || present < 0 || present > total) printf("Invalid attendance data.\n");
    else
    {
        printf("Attendance = %.2f%%\n", present * 100.0f / total);
        if (present * 100.0f / total >= 75) printf("Attendance requirement met.\n");
        else printf("Attendance is below 75%%.\n");
    }
    return 0;
}
