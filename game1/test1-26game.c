#define _CRT_SECURE_NO_WARNINGS 1
#include "game1.h"
void game()
{
	printf("ɨ�׿�ʼ\n");
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	initBoard(mine,ROWS,COLS,'0');//��ʼ��������Ϣ
	initBoard(show, ROWS, COLS,'*');//��ʼ���������
	setMine(mine, ROW, COL);//���õ���
	displayBoard(mine,ROW, COL);
	displayBoard(show, ROW, COL);//չʾ����
	findMine(mine,show, ROW, COL);//����
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
		printf("������>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������,����������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}