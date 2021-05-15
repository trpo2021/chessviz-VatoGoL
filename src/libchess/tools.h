#include <stdio.h>
#pragma once

void Print_table(char Table[9][9]);
void Preparation(char Table_Chess[9][9], unsigned int p);
FILE *Checking_Resources(FILE *file, char Name_file[30]);
void Checking_moves(FILE *file, unsigned int p, char Table_chess[9][9]);
