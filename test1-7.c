#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int add(int x, int y)//自定义函数：变量x加变量y等于变量z，并返回z值
{
	int z = x + y;
	return z;

}
int main()
{
	int a = 1;
	int b = 2;
	int sum = 0;
	sum = add(a, b);
	printf("%d\n", sum);


	return 0;
}