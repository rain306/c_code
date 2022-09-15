#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//char c = '0';
	//int i = 1;
	//c1[0] = 1 + '0';
	//char c1[] = { 0 };
	//
	//printf("%p", &c1[0]);
	/*char a = 97;
	int b = sizeof(char);
	char c = 3;
	int d = 1;
	d = d + --d;
	char s [] = "abc";
	printf("%d\n", b);
	printf("%c\n", a);
	printf("%c\n", c);
	printf("%u\n", sizeof(-c));
	printf("%d\n", d);
	printf("%d", sizeof(int*));*/
	char s[] = {'a','b','c','\0'};
	printf("%d", strlen(s));
	return 0;
}