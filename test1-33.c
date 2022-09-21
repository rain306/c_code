#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* arr1,const char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	char* ret = arr1;
	while (*arr1++ = *arr2++)
	{
			;
	}
	return ret;
}
int main()
{
	char arr1[] = "#########";
	char arr2[] = "bit";
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}