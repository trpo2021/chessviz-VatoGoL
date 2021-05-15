#include <ctest.h>
#include <libchess/tools.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CTEST(suite2, PUSTOI) {}
CTEST(suite2, CHEK_MOVE) {
  unsigned int q = 0, p = 0;
  int i, j;
  char Tablefact_chess[9][9];
  char Table_chess[9][9];
  FILE *file;
  file = fopen("test/text.txt", "r");
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      Tablefact_chess[i][j] = ' ';
    }
  }

  Preparation(Tablefact_chess, p);
  Checking_moves(file, q, Tablefact_chess);
  fclose(file);
  free(file);
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      Table_chess[i][j] = ' ';
    }
  }

  Table_chess[0][1] = 'a';
  Table_chess[0][2] = 'b';
  Table_chess[0][3] = 'c';
  Table_chess[0][4] = 'd';
  Table_chess[0][5] = 'e';
  Table_chess[0][6] = 'f';
  Table_chess[0][7] = 'g';
  Table_chess[0][8] = 'h';
  Table_chess[1][0] = '1';
  Table_chess[2][0] = '2';
  Table_chess[3][0] = '3';
  Table_chess[4][0] = '4';
  Table_chess[5][0] = '5';
  Table_chess[6][0] = '6';
  Table_chess[7][0] = '7';
  Table_chess[8][0] = '8';

  Table_chess[1][1] = 'R';
  Table_chess[1][2] = 'N';
  Table_chess[1][3] = 'B';
  Table_chess[1][4] = 'Q';
  Table_chess[1][5] = 'K';
  Table_chess[1][6] = 'B';
  Table_chess[1][7] = 'N';
  Table_chess[1][8] = 'R';
  for (p = 0; p < 8; p++) {
    Table_chess[2][p + 1] = 'P';
  }

  Table_chess[8][1] = 'r';
  Table_chess[8][2] = 'n';
  Table_chess[8][3] = 'b';
  Table_chess[8][4] = 'q';
  Table_chess[8][5] = 'k';
  Table_chess[8][6] = 'b';
  Table_chess[8][7] = 'n';
  Table_chess[8][8] = 'r';
  Table_chess[7][1] = 'p';
  Table_chess[7][2] = 'p';
  Table_chess[7][3] = 'p';
  Table_chess[7][4] = 'p';
  Table_chess[5][6] = 'p';
  Table_chess[7][6] = 'p';
  Table_chess[7][7] = 'p';
  Table_chess[7][8] = 'p';

  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++)
      ASSERT_EQUAL(Table_chess[i][j], Tablefact_chess[i][j]);
  }
}
