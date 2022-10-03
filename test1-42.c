#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//地址相减的就是差的字节大小


	return 0;
}