#define _CRT_SECURE_NO_WARNINGS 1
#include "game1.h"
void game()
{
	printf("扫雷开始\n");
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	initBoard(mine,ROWS,COLS,'0');//初始化棋盘信息
	initBoard(show, ROWS, COLS,'*');//初始化棋盘外观
	setMine(mine, ROW, COL);//设置地雷
	displayBoard(mine,ROW, COL);
	displayBoard(show, ROW, COL);//展示棋盘
	findMine(mine,show, ROW, COL);//排雷
}
void menu()
{
	printf("*****************************\n");
	printf("****   1.play    0.exit   ***\n");
	printf("*****************************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}