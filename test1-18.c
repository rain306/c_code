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
	printf("������\n");
	ret = rand()%100+1;
	while (1)
	{
		printf("��������:>");
		scanf("%d", &num);
		if (num  >ret )
		{
			printf("�´���\n");
		}
		else if (num < ret)
		{
			printf("��С��\n");
		}
		else if (num == ret)
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ");
			game();
			break;
		case 0:
			printf("�˳�����");
			break;
		default:
			printf("ѡ���������ѡ��");
			break;
		}
	} while (input);

	return 0;
}