#include <stdio.h>
#include <stdlib.h>

char board[8][8]
        = {"rnbqkbnr",
           "pppppppp",
           "        ",
           "        ",
           "        ",
           "        ",
           "PPPPPPPP",
           "RNBQKBNR"};

void printBoard()
{
    int i, j;
    printf("\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", 8 - i);
        for (j = 0; j < 8; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g h\n");
}

int main()
{
 printBoard();
}
