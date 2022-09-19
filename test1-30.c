#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(char arr[])
{
	
	printf("%c", arr[0]);
}
int main()
{
	char arr[] = "abc";
	print(arr+1);//这里地址+1,相当于下标+1
	




	return 0;
}