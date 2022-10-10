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
		if (*str1 == '\0')//��ȫ��ȣ���\0λ��Ҳһ�������ֻ�ж�str1,�������򷵻�0
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > *str2)//���ڷ���1
		return 1;
	else
		return -1;//С�ڷ���-1
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