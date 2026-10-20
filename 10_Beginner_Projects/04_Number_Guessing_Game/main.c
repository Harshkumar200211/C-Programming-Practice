/* Number Guessing Game
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    int secret = 7, guess;
    printf("I have picked a number from 1 to 10.\n");
    printf("Enter your guess: ");
    scanf("%d", &guess);
    if (guess == secret) printf("Correct! You guessed the number.\n");
    else if (guess < secret) printf("Too low. The number was 7.\n");
    else printf("Too high. The number was 7.\n");
    return 0;
}
