#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
int main()
{
	//int i = 0;                //����n�Ľ׳�
	//int j = 0;
	//long k = 1;
	//printf("����n = :> ");
	//scanf("%ld", &j);
	//for (i = 1;i <= j;i++)
	//{
	//	k *= i;
	//}
	//printf("%d", k);



	/*int i = 1;                  ����1��n�Ľ׳�֮��
	int j = 1;
	long k = 1;
	long a = 0;
	int b = 0;
	printf("����1~n�Ľ׳�֮�ͣ�������n = :>");
	scanf("%d", &b);
	
	for (i = 1;i <=b;i++)   
	{
		for(j=1;j<=i;j++)
		{
			k *= j;
		}
		a += k;
		k = 1;
	}
	printf("%d", a);*/
	char �û���[] = "rain";
	char ����[] = "123456";
	int i = 0;
	start :
	printf("�˻�����");
	scanf("%s",&�û���);
	loop: printf("���룺 ");
	scanf("%s", ����);
	if (strcmp(�û���,"rain")==0 && strcmp(����,"123456")==0)
	{
		printf("��½�ɹ�");
		Sleep(500);
		goto end;
	}
	if (strcmp(�û���, "rain") != 0)
	{
		printf("�û���������\n����������");
		Sleep(500);
		system("cls");
		goto start;

	}
	if (strcmp(����, "123456")!= 0)
	{
		printf("�����������������");
		i+=1;
		if (i == 3)
		{
			printf("����������󳬹�3�Σ������˳�����");
			Sleep(1000);
			system("cls");
			goto end;
		}
		goto loop;
	}

	
	
	end:
	return 0;
}