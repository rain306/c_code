#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	struct S   //λ�ε�ʹ������ʡ�ռ�
	{
		int a : 2;
		int b : 5;
		int c : 10;//Intλ��,����4�ֽڿռ�,a,b,cռ��17����,�˷�15����,�ٿ���4�ֽڿռ���d,�˷�2����;�ܹ�8�ֽڴ�С
		int d : 30;
	}s;
	printf("%d", sizeof(s));//8�ֽ�

	return 0;
}