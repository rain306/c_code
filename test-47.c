#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>

char* my_strcat(char* dest, char* scr)
{
	assert(dest);
	assert(scr);
	while (*dest)
		dest++;
	while (*dest++ = *scr++)
		;
	return (dest);
}
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')//若全相等，则\0位置也一样，因此只判断str1,若满足则返回0
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > *str2)//大于返回1
		return 1;
	else
		return -1;//小于返回-1
}
int main()
{
	char arr1[] = "abcde";
	char arr2[] = "hello";
	char arr3[] = "abcd";
	char arr4[] = "abcd";
	my_strcat(arr1, arr2);
	printf("%s\n",arr1);
	int r = my_strcmp(arr3, arr4);
	printf("%d\n", r);
	return 0;
}