#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
int main()
{
	//int i = 0;                //计算n的阶乘
	//int j = 0;
	//long k = 1;
	//printf("输入n = :> ");
	//scanf("%ld", &j);
	//for (i = 1;i <= j;i++)
	//{
	//	k *= i;
	//}
	//printf("%d", k);



	/*int i = 1;                  计算1到n的阶乘之和
	int j = 1;
	long k = 1;
	long a = 0;
	int b = 0;
	printf("计算1~n的阶乘之和，请输入n = :>");
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
	char 用户名[] = "rain";
	char 密码[] = "123456";
	int i = 0;
	start :
	printf("账户名：");
	scanf("%s",&用户名);
	loop: printf("密码： ");
	scanf("%s", 密码);
	if (strcmp(用户名,"rain")==0 && strcmp(密码,"123456")==0)
	{
		printf("登陆成功");
		Sleep(500);
		goto end;
	}
	if (strcmp(用户名, "rain") != 0)
	{
		printf("用户名不存在\n请重新输入");
		Sleep(500);
		system("cls");
		goto start;

	}
	if (strcmp(密码, "123456")!= 0)
	{
		printf("密码错误，请重新输入");
		i+=1;
		if (i == 3)
		{
			printf("密码输入错误超过3次，即将退出程序");
			Sleep(1000);
			system("cls");
			goto end;
		}
		goto loop;
	}

	
	
	end:
	return 0;
}