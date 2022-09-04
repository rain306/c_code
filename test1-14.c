#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1;i <= 10;i++)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d", i);

	}
	/*int k=0;
	for (k = 0;k = 0;k++) 
	{
		printf("%d", k);
	}*/


	return 0;
}