#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int max(int x, int y)
{	
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	//int ����1[5] = { 1,2,3,4,5, };
	//printf("%d\n", ����1[2]);
	int a = 0;
	int b = 0;
	int ��� = 0;
	scanf("%d%d", &a,&b);
	���=max(a, b);
	printf("�����%d\n", ���);

	return 0;
}