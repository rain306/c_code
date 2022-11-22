#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void reverse(int arr[],int left,int right)
{
	while (left < right)
	{
		int tmp = arr[right];
		arr[right] = arr[left];
		arr[left] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("输入旋转的数字个数:>");
	scanf("%d", &k);
	if (k >= n)
		k %= n;
	reverse(arr, n-k, n-1);
	reverse(arr, 0, n-k-1);
	reverse(arr, 0, n-1);
	for (int i = 0; i < n;i++)
		printf("%d ",arr[i]);

	return 0;
}