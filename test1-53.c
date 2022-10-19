#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main()
{
	
	int* p = (int*)malloc(10 * sizeof(int));
	int i = 0;
	if (!p)
		return 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i) = i);
	}
	free(p);
	p = NULL;
	return 0;
}