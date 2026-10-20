/* Contact Book
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    char name[50], phone[20];
    printf("Enter contact name: ");
    scanf("%49s", name);
    printf("Enter phone number: ");
    scanf("%19s", phone);
    printf("Contact saved for this run:\nName = %s\nPhone = %s\n", name, phone);
    return 0;
}
