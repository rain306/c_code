#define _CRT_SECURE_NO_WARNINGS 1
#include "SQL.h"
void iniSql(sl* ps)
{
	ps->arr = NULL;
	ps->size = 0;
	ps->contain = 0;
}
void check(sl* ps)
{
	if (ps->size == ps->contain)
	{
		int newContain = ps->contain ? ps->contain * 2 : 4;
		type* tmp = (type*)realloc(ps->arr,newContain * sizeof(type));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->arr = tmp;
			ps->contain = newContain;
			//printf("realloc succeed\n");	
		}
	}
}
void sqlPrint(sl* ps)//¥Ú”°
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}
void sqlPushFront(sl* ps, type x)//Õ∑≤Â
{
	check(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->arr[end + 1] = ps->arr[end];
		end--;
	}
	ps->arr[0] = x;
	ps->size++;
}
void sqlPushBack(sl* ps,type x)//Œ≤≤Â
{
	check(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}
void sqlPopFront(sl* ps)
{
	assert(ps->size > 0);
	int i = 1;
	for (i = 0; i < ps->size; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
void sqlPopBack(sl* ps)
{
	assert(ps->size > 0);
	ps->size--;
}
void sqlInsert(sl* ps, int pos, type x)
{
	pos -= 1;
	assert(pos < ps->size);
	check(ps);
	int end = ps->size-1;
	while (end >= pos)
	{
		ps->arr[end + 1] = ps->arr[end];
		end--;
	}
	ps->arr[pos] = x;
	ps->size++;
}
void sqlErase(sl* ps, int pos)
{
	pos -= 1;
	assert(pos < ps->size);
	for (int i = pos; i < ps->size; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
void sqlDestory(sl* ps)
{
	free(ps->arr);
	ps->arr = NULL;
	ps->size = 0;
	ps->contain = 0;
}
int sqlFind(sl* ps,type x)
{
	for (int i = 0; i < ps->size; i++)
		if (ps->arr[i] == x)
			return i;
	return -1;
}
void sqlModify(sl* ps, int pos, type x)
{
	assert(pos < ps->size);
	ps->arr[pos - 1] = x;
}
