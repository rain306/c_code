#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char a[] = {'a','b','c','d','g','i'};
	
	printf("%d", strlen(a) - strlen(&a + 1));

	return 0;
}