#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void initBoard(char board[ROW][COL], int row, int col)//��ʼ������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//ʹ��������ÿ���ռ�洢' '
		}
	}

}
void displayBoard(char board[ROW][COL], int row, int col)//չʾ����
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//����ַ�
			if(j<col - 1)
			{
				printf("|");//������ָ���
			}
		}
		printf("\n");//һ�������
		if (i < row - 1)//�������,���һ�в����
		{
			for (j = 0; j < col; j++)
			{
				printf("---");//����ָ���
				if (j<col -1)//���һ�в����
				{
					printf("|");
				}
			}
			printf("\n");//һ�������
		}
	}
}
void playerMove(char board[ROW][COL], int row, int col)//�������
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	while(1)
	{
		printf("����������>:");
		scanf("%d%d", &x, &y);//��������,������Ϸ���break����ѭ��������һ��
		if (1 <= x && x <= row && 1 <= y && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�����걻ռ��\n");
		}
		else
			printf("����Ƿ�����������\n");
	}
}
void computerMove(char board[ROW][COL], int row, int col)//��������(���)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while(1)
	{
		x = rand() % ROW;//�������ģ3ʹ��x,yȡֵֻ��Ϊ0,1,2
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}
int isFull(char board[ROW][COL], int row, int col)//�ж������Ƿ�����
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//û��
		}
	}
	return 1;//����
}
char isWin(char board[ROW][COL], int row, int col)//�ж���Ӯ
{
	int i = 0;
	for (i = 0; i < row; i++)//�ж�һ������
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];//���������*,��ֱ�ӷ�������(*)�����Ӯ,���Ե�#ͬ��
		}
	}
	for (i = 0; i < col; i++)//�ж�һ������
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ')//�ж϶Խ�
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ')//�ж϶Խ�
	{
		return board[1][1];
	}
	if (isFull(board, ROW, COL) == 1)//�ж�ƽ��
	{
		return 'q';
	}
	return 'c';//��Ϸ����
}
