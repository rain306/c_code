#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(char arr[])
{
	
	printf("%c", arr[0]);
}
int main()
{
	char arr[] = "abc";
	print(arr+1);//�����ַ+1,�൱���±�+1
	




	return 0;
}