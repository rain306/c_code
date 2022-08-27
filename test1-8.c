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
	//int 数组1[5] = { 1,2,3,4,5, };
	//printf("%d\n", 数组1[2]);
	int a = 0;
	int b = 0;
	int 结果 = 0;
	scanf("%d%d", &a,&b);
	结果=max(a, b);
	printf("结果是%d\n", 结果);

	return 0;
}