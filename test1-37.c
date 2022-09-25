#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
			//printf("%d ", *(*(p + i) + j));

		printf("%d ", p[i][j]);//两种等效
		printf("\n");
	}
}
int main() 
{
	//int arr[5] = { 1,2,3,4,5 };
	//char arr2[5] = "abcef";
	//printf("%s\n",arr2);
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7} };
	print(arr, 3, 5);

	return 0;
}