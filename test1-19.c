#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
	char input[] = "0";
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���ȡ���ػ�������ȡ��\n������>:");
	scanf("%s", input);
	if (strcmp(input, "ȡ��") == 0)
	{
		system("shutdown -s -a ");
	}
	else
	{
		goto again;
	}



	return 0;
}