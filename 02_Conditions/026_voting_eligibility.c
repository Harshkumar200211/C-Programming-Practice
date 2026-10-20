/* Program 026: Voting Eligibility
 * Topic: conditions
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18) printf("Eligible to vote\n");
    else printf("Not eligible to vote\n");
    return 0;
}
