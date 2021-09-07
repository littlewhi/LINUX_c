#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void restart(char chess[ROW][COL],int row,int col);
void chess_board(char chess[ROW][COL],int row, int col);
void player(char chess[ROW][COL],int row,int col);
void computer(char chess[ROW][COL],int row,int col);
char orwin(char chess[ROW][COL],char n,int row,int col);