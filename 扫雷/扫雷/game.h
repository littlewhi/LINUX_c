#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define LEI 10
void restart(char arr[ROWS][COLS],int rows,int cols, char n);
void display(char arr[ROWS][COLS],int rows,int cols);
void set(char arr[ROWS][COLS], int row, int col,int lei);
int find(char arr[ROWS][COLS], int x, int y);

void mid(int x, int y, char arr[ROWS][COLS],int rows,int cols,char pp[ROWS][COLS]);
void a_enlarge(int x, int y,char arr[ROWS][COLS],char pp[ROWS][COLS]);
void b_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS]);
void c_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS]);
void d_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS]);
void e_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS]);
void f_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS]);
void g_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS]);
void h_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS]);
int is_win(char arr[ROWS][COLS], char n);