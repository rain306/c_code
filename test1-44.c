#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while(left<right)
	{
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left<right)&&(arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	for (i = 0; i < sz; i++)
		printf("%d", arr[i]);





}
