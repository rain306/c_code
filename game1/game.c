#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void initBoard(char board[ROW][COL], int row, int col)//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//使得数组中每个空间存储' '
		}
	}

}
void displayBoard(char board[ROW][COL], int row, int col)//展示棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//描绘字符
			if(j<col - 1)
			{
				printf("|");//描绘竖分割线
			}
		}
		printf("\n");//一组完后换行
		if (i < row - 1)//描绘两组,最后一行不描绘
		{
			for (j = 0; j < col; j++)
			{
				printf("---");//描绘横分割线
				if (j<col -1)//最后一列不描绘
				{
					printf("|");
				}
			}
			printf("\n");//一组完后换行
		}
	}
}
void playerMove(char board[ROW][COL], int row, int col)//玩家下棋
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while(1)
	{
		printf("请输入坐标>:");
		scanf("%d%d", &x, &y);//输入坐标,若坐标合法则break跳出循环进入下一步
		if (1 <= x && x <= row && 1 <= y && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("该坐标被占用\n");
		}
		else
			printf("坐标非法请重新输入\n");
	}
}
void computerMove(char board[ROW][COL], int row, int col)//电脑下棋(随机)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while(1)
	{
		x = rand() % ROW;//将随机数模3使得x,y取值只能为0,1,2
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}
int isFull(char board[ROW][COL], int row, int col)//判断棋盘是否满了
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//没满
		}
	}
	return 1;//满了
}
char isWin(char board[ROW][COL], int row, int col)//判断输赢
{
	int i = 0;
	for (i = 0; i < row; i++)//判断一行三连
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];//玩家下棋是*,故直接返回棋子(*)则玩家赢,电脑的#同理
		}
	}
	for (i = 0; i < col; i++)//判断一列三连
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ')//判断对角
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ')//判断对角
	{
		return board[1][1];
	}
	if (isFull(board, ROW, COL) == 1)//判断平局
	{
		return 'q';
	}
	return 'c';//游戏继续
}
