#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int findNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while(x<=*px-1&&y>=0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
}
int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = findNum(arr, k, &x, &y);
	if (ret == 1)
		printf("找到了\n坐标是%d %d\n",x,y);
	else
		printf("找不到\n");
	return 0;
}
