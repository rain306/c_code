#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char* arr1[])
{
	char* start = arr1;//��ַ���ݣ��ٰ�ָ��arr1�ĵ�ַ��ֵ��start,end��
	char* end = arr1;//����char** start = &arr1����ȡָ��arr1�ĵ�ַ��
	while (*end != '\0')
	{
		end++;

	}
	return end - start;
}
int main()
{
	char arr[] = "bit";
	int count = my_strlen(arr);
	int i = 1;
	int* pi = &i;
	printf("%p\n", pi);
	printf("%d\n", count);
	int** ppi = &pi;
	printf("%p\n", *ppi);
	printf("%d\n", **ppi);
	char* arr2[] = { &i };
	printf("%d", *arr2[0]);

	return 0;
}