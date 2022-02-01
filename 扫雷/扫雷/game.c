#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void restart(char arr[ROWS][COLS],int rows,int cols, char n)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = n;
		}

	}
}
void display(char arr[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i < rows - 1; i++)
	{
		printf(" %d ", i);
		int j = 0;
		for (j = 1; j < cols - 1; j++)
		{
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
}
void set(char arr[ROWS][COLS], int row, int col,int lei)
{
	int s = lei;
	while (s)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			s--;
		}
	}

}
int find(char arr[ROWS][COLS],int x,int y)
{
	
	return arr[x][y - 1] +
		arr[x][y + 1] +
		arr[x - 1][y] +
		arr[x - 1][y - 1] +
		arr[x - 1][y + 1] +
		arr[x + 1][y] +
		arr[x + 1][y - 1] +
		arr[x + 1][y + 1] -
		8 * '0';


}
void mid(int x, int y, char arr[ROWS][COLS],int rows,int cols,char pp[ROWS][COLS])
{
	if (x + 1 < rows && y + 1 < cols && x - 1 >= 0 && y - 1 >= 0)
	{
		a_enlarge(x, y - 1, arr,pp);
		b_enlarge(x, y + 1, arr,pp);
		c_enlarge(x + 1, y - 1, arr,pp);
		d_enlarge(x + 1, y, arr,pp);
		e_enlarge(x + 1, y + 1, arr,pp);
		f_enlarge(x - 1, y + 1, arr,pp);
		g_enlarge(x - 1, y - 1, arr,pp);
		h_enlarge(x - 1, y, arr,pp);
	}
}
void a_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS])
{
	int i;
	if (x + 1 < ROWS && y + 1 < COLS && x - 1 >= 0 && y - 1 >= 0)
	{
		i = arr[x][y - 1] +
			arr[x][y + 1] +
			arr[x - 1][y] +
			arr[x - 1][y - 1] +
			arr[x - 1][y + 1] +
			arr[x + 1][y] +
			arr[x + 1][y - 1] +
			arr[x + 1][y + 1] -
			8 * '0';
		pp[x][y] = i + '0';
	}
	else
		i = 1;
	if (i == 0)
	{
		a_enlarge(x, y - 1, arr, pp);
	}
}
void b_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS])
{
	int i;
	if (x + 1 < ROWS && y + 1 < COLS && x - 1 >= 0 && y - 1 >= 0)
	{
		i = arr[x][y - 1] +
			arr[x][y + 1] +
			arr[x - 1][y] +
			arr[x - 1][y - 1] +
			arr[x - 1][y + 1] +
			arr[x + 1][y] +
			arr[x + 1][y - 1] +
			arr[x + 1][y + 1] -
			8 * '0';
		pp[x][y] = i + '0';
	}
	else
		i = 1;
	if (i == 0)
	{
		b_enlarge(x, y + 1, arr, pp);
	}
}
void c_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS])
{
	int i;
	if (x + 1 < ROWS && y + 1 < COLS && x - 1 >= 0 && y - 1 >= 0)
	{
		i = arr[x][y - 1] +
			arr[x][y + 1] +
			arr[x - 1][y] +
			arr[x - 1][y - 1] +
			arr[x - 1][y + 1] +
			arr[x + 1][y] +
			arr[x + 1][y - 1] +
			arr[x + 1][y + 1] -
			8 * '0';
		pp[x][y] = i + '0';
	}
	else
		i = 1;
	if (i == 0)
	{
		c_enlarge(x-1, y, arr, pp);
	}
}
void d_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS])
{
	int i;
	if (x + 1 < ROWS && y + 1 < COLS && x - 1 >= 0 && y - 1 >= 0)
	{
		i = arr[x][y - 1] +
			arr[x][y + 1] +
			arr[x - 1][y] +
			arr[x - 1][y - 1] +
			arr[x - 1][y + 1] +
			arr[x + 1][y] +
			arr[x + 1][y - 1] +
			arr[x + 1][y + 1] -
			8 * '0';
		pp[x][y] = i + '0';
	}
	else
		i = 1;
	if (i == 0)
	{
		d_enlarge(x - 1, y - 1, arr, pp);
	}
}
void e_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS])
{
	int i;
	if (x + 1 < ROWS && y + 1 < COLS && x - 1 >= 0 && y - 1 >= 0)
	{
		i = arr[x][y - 1] +
			arr[x][y + 1] +
			arr[x - 1][y] +
			arr[x - 1][y - 1] +
			arr[x - 1][y + 1] +
			arr[x + 1][y] +
			arr[x + 1][y - 1] +
			arr[x + 1][y + 1] -
			8 * '0';
		pp[x][y] = i + '0';
	}
	else
		i = 1;
	if (i == 0)
	{
		e_enlarge(x - 1, y + 1, arr, pp);
	}
}
void f_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS])
{
	int i;
	if (x + 1 < ROWS && y + 1 < COLS && x - 1 >= 0 && y - 1 >= 0)
	{
		i = arr[x][y - 1] +
			arr[x][y + 1] +
			arr[x - 1][y] +
			arr[x - 1][y - 1] +
			arr[x - 1][y + 1] +
			arr[x + 1][y] +
			arr[x + 1][y - 1] +
			arr[x + 1][y + 1] -
			8 * '0';
		pp[x][y] = i + '0';
	}
	else
		i = 1;
	if (i == 0)
	{
		f_enlarge(x + 1, y, arr, pp);
	}
}
void g_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS])
{
	int i;
	if (x + 1 < ROWS && y + 1 < COLS && x - 1 >= 0 && y - 1 >= 0)
	{
		i = arr[x][y - 1] +
			arr[x][y + 1] +
			arr[x - 1][y] +
			arr[x - 1][y - 1] +
			arr[x - 1][y + 1] +
			arr[x + 1][y] +
			arr[x + 1][y - 1] +
			arr[x + 1][y + 1] -
			8 * '0';
		pp[x][y] = i + '0';
	}
	else
		i = 1;
	if (i == 0)
	{
		g_enlarge(x + 1, y - 1, arr, pp);
	}
}
void h_enlarge(int x, int y, char arr[ROWS][COLS], char pp[ROWS][COLS])
{
	int i;
	if (x + 1 < ROWS && y + 1 < COLS && x - 1 >= 0 && y - 1 >= 0)
	{
		i = arr[x][y - 1] +
			arr[x][y + 1] +
			arr[x - 1][y] +
			arr[x - 1][y - 1] +
			arr[x - 1][y + 1] +
			arr[x + 1][y] +
			arr[x + 1][y - 1] +
			arr[x + 1][y + 1] -
			8 * '0';
		pp[x][y] = i + '0';
	}
	else
		i = 1;
	if (i == 0)
	{
		h_enlarge(x + 1, y + 1, arr, pp);
	}
}
int is_win(char arr[ROWS][COLS], char n)
{
	int i = 0;
	int w = ROW * COL - LEI;
	for (i = 0; i < ROWS; i++)
	{
		int j = 0;
		for (j = 0; j < COLS; j++)
		{
			if (arr[i][j] != n)
			{
				w--;
			}
			if (!w)
			{
				return w;
			}
		}

	}
	return 1;

}