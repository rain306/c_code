#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
void menu()
	{
		printf("***************************\n");
		printf("***   1.play  0.exit    ***\n");
		printf("***************************\n");
	}
void game()
{
	int ret = 0;
	int num = 0;
	printf("猜数字\n");
	ret = rand()%100+1;
	while (1)
	{
		printf("输入数字:>");
		scanf("%d", &num);
		if (num  >ret )
		{
			printf("猜大了\n");
		}
		else if (num < ret)
		{
			printf("猜小了\n");
		}
		else if (num == ret)
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏");
			game();
			break;
		case 0:
			printf("退出程序");
			break;
		default:
			printf("选择错误，重新选择");
			break;
		}
	} while (input);

	return 0;
}