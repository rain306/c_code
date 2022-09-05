#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "hello world!!!!!";
	char arr2[] = "################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf(arr2);
	return 0;
}