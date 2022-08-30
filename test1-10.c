#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;

}
#define MAX(X, Y) (X > Y ? X : Y)//定义宏
int main()
{
	typedef unsigned int u_int;//typedef重命名类型名
	unsigned int num = 20;
	u_int num2 = 20;
	int a = 10;
	int b = 20;
	int max = Max(a, b);
	printf("max = %d\n", max);
	max = Max(a, b);
	printf("max = %d\n", max);
	
	




	return 0;
}