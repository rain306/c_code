#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};//��������Ϣ
	initBoard(board, ROW, COL);//��ʼ������
	displayBoard(board,ROW,COL);//չʾ����
	while(1)
	{
		playerMove(board, ROW, COL);//�����
		displayBoard(board, ROW, COL);//չʾ����
		ret = isWin(board,ROW,COL);//�ж���Ӯ
		if (ret != 'c')//��������Ϊc,����Ϸ����
		{
			break;
		}
		computerMove(board, ROW, COL);//������
		displayBoard(board, ROW, COL);//չʾ����
		ret = isWin(board,ROW,COL);//�ж���Ӯ
		if (ret != 'c')//��������Ϊc,����Ϸ����
		{
			break;
		}
	}
	if (ret == '*')
		{
		printf("���Ӯ");
		}
	else if (ret == '#')
		{
		printf("����Ӯ");
		}
	else 
		{
		printf("ƽ��");
		}
}
void menu()//���˵�
{
	printf("*************************************\n");
	printf("*****   1.��ʼ��Ϸ 0.�˳���Ϸ   *****\n");
	printf("*************************************\n");

}
void test()//��Ϸ���
{
	int input = 0;
	srand((unsigned int)time(NULL));//�����������ʼֵ
	do
	{
		menu();
		printf("������>:");
		scanf("%d", &input);
		switch (input)//��Ϊ1����Ϸ��ʼ,Ϊ0��Ϸ����,Ϊ��������ѭ����������;
		{			  //ԭ��Ϊwhile�ж�input,��inputΪ0ʱΪ��,����ѭ��
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}
		



	} while (input);
}
int main()//������
{
	test();
	return 0;
}