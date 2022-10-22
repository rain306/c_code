#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	struct S
	{
		int i;
		int arr[0];
	};
	struct S* ps =(struct S*) malloc(sizeof(struct S) + 5 * sizeof(int));
	
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ", ps ->arr[i]);
	}
	struct S* ptr = realloc(ps, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	return 0;
}