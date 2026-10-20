/* Library Management System
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    int total, issued;
    printf("Enter total books and issued books: ");
    scanf("%d %d", &total, &issued);
    if (total < 0 || issued < 0 || issued > total) printf("Invalid book count\n");
    else printf("Available books = %d\n", total - issued);
    return 0;
}
