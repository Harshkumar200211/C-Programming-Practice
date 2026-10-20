/* MCQ Quiz Application
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    char answer;
    int score = 0;
    printf("Question: What is 2 + 3?\n");
    printf("A) 4   B) 5   C) 6\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') { printf("Correct!\n"); score++; }
    else printf("Incorrect. The correct answer is B.\n");
    printf("Score = %d / 1\n", score);
    return 0;
}
