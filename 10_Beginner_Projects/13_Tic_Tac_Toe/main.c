/* Tic-Tac-Toe
 * Beginner-friendly console project.
 */
#include <stdio.h>

int main()
{
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int turn, row, col, winner = 0, valid, r, c;
    for (turn = 0; turn < 9 && !winner; turn++)
    {
        char mark = (turn % 2 == 0) ? 'X' : 'O';
        valid = 0;
        while (!valid)
        {
            printf("Player %c: enter row and column (1-3): ", mark);
            if (scanf("%d %d", &row, &col) != 2) return 0;
            row--; col--;
            if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ')
            {
                board[row][col] = mark;
                valid = 1;
            }
            else printf("Invalid or occupied position. Try again.\n");
        }
        for (r = 0; r < 3; r++)
            if (board[r][0] != ' ' && board[r][0] == board[r][1] && board[r][1] == board[r][2]) winner = 1;
        for (c = 0; c < 3; c++)
            if (board[0][c] != ' ' && board[0][c] == board[1][c] && board[1][c] == board[2][c]) winner = 1;
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) winner = 1;
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) winner = 1;
        printf("%c %c %c\n%c %c %c\n%c %c %c\n",
               board[0][0], board[0][1], board[0][2], board[1][0], board[1][1], board[1][2],
               board[2][0], board[2][1], board[2][2]);
        if (winner) printf("Player %c wins!\n", mark);
    }
    if (!winner) printf("Game is a draw.\n");
    return 0;
}
