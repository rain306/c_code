#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};//数组存放信息
	initBoard(board, ROW, COL);//初始化棋盘
	displayBoard(board,ROW,COL);//展示棋盘
	while(1)
	{
		playerMove(board, ROW, COL);//玩家走
		displayBoard(board, ROW, COL);//展示棋盘
		ret = isWin(board,ROW,COL);//判断输赢
		if (ret != 'c')//若输出结果为c,则游戏继续
		{
			break;
		}
		computerMove(board, ROW, COL);//电脑走
		displayBoard(board, ROW, COL);//展示棋盘
		ret = isWin(board,ROW,COL);//判断输赢
		if (ret != 'c')//若输出结果为c,则游戏继续
		{
			break;
		}
	}
	if (ret == '*')
		{
		printf("玩家赢");
		}
	else if (ret == '#')
		{
		printf("电脑赢");
		}
	else 
		{
		printf("平局");
		}
}
void menu()//描绘菜单
{
	printf("*************************************\n");
	printf("*****   1.开始游戏 0.退出游戏   *****\n");
	printf("*************************************\n");

}
void test()//游戏框架
{
	int input = 0;
	srand((unsigned int)time(NULL));//定义随机数初始值
	do
	{
		menu();
		printf("请输入>:");
		scanf("%d", &input);
		switch (input)//若为1则游戏开始,为0游戏结束,为其他继续循环重新输入;
		{			  //原理为while判断input,当input为0时为假,跳出循环
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
		



	} while (input);
}
int main()//主函数
{
	test();
	return 0;
}