#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
#include<string.h>
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		char tmp = *arr;
//		for (j = 0; j <len-1;j++ )
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//
//}
//三步翻转法:
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left<right)
	{
		
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr,arr+k-1);
	reverse(arr + k, arr + len - 1);
	reverse(arr,arr+len-1);
}
int main()
{
	char arr[] = "ABCD";
	left_move(arr, 2);
	printf("%s", arr);


	return 0;
}