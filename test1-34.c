#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h.>
int main()
{
	int a = 1;
	int b = -1;
	int* p = a;
	printf("%d\n", a + b);
	printf("%d\n", sizeof(*p));
	printf("%p\n", &p);


	return 0;
}