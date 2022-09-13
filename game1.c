#define _CRT_SECURE_NO_WARNINGS 1
#include "game1.h"
void initBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}

	}
}
void displayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);

		}
		printf("\n");
	}
}
void setMine(char board[ROWS][COLS], int row, int col)
{
	int count = easy;
	while (count)
	{
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}
void findMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win<row*col-easy)
	{
		printf("请输入排查雷的坐标>:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾,你踩雷了\n");
				displayBoard(mine, row, col);
				break;
			}
			else
			{
				if(show[x][y]=='*')
				{
					int count = getcount(mine, x, y);
					show[x][y] = count + '0';//count是整型,加上字符后变成相应ASCII对应字符
					spread(mine,show,x,y,row,col);
					displayBoard(show, row, col);
					win++;
				}
				else
				{
					printf("坐标非法,请重新输入\n");
				}

			}
		}
		else
		{
			printf("输入坐标非法,请重新输入\n");
		}
	}
	if (win == row * col - easy)
	{
		printf("恭喜你,通关了\n");
	}
}
int getcount(char mine[ROWS][COLS], int x, int y)
{
	return
		mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y + 1] - 8 * '0';

}
void spread(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y,int row,int col)
{
	int count = getcount(mine,x,y);
	if (count == 0&& x >= 1 && x <= row && y >= 1 && y <= col)
	{
		show[x][y] = '0';
		spread(mine, show, x - 1, y - 1,ROW,COL);
		spread(mine, show, x - 1, y,ROW,COL);
		spread(mine, show, x - 1, y + 1,ROW,COL);
		spread(mine, show, x, y - 1,ROW,COL);
		spread(mine, show, x , y + 1,ROW,COL);
		spread(mine, show, x + 1, y - 1,ROW,COL);
		spread(mine, show, x + 1, y,ROW,COL);
		spread(mine, show, x + 1, y + 1,ROW,COL);
	}
	show[x][y] = count + '0';
}