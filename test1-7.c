#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int add(int x, int y)//�Զ��庯��������x�ӱ���y���ڱ���z��������zֵ
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