#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
	char input[] = "0";
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑将在一分钟内关机，取消关机请输入取消\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "取消") == 0)
	{
		system("shutdown -s -a ");
	}
	else
	{
		goto again;
	}



	return 0;
}