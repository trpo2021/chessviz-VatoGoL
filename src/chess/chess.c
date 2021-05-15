#include <libchess/tools.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  unsigned int p = 0;
  char Table_chess[9][9] = {};
  //
  Preparation(Table_chess, p); // Размещаем фигуры на доске
  //
  FILE *file = 0;
  char Name_file[30];

  file = Checking_Resources(file, Name_file);
  //Проверяем на месте  ли файл с ходами

  Checking_moves(file, p, Table_chess);

  Print_table(Table_chess);
  return 0;
}
