#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"
void StackInit(ST* ps)
{
	assert(ps);
	ps->a =(STDataType*)malloc(sizeof(STDataType)*4);
	ps->capacity = 4;
	ps->top = -1;//插入第一个数据时top++,变成0,则a[top]就指向第一个数据
	
}
void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
	
}
void check(ST* ps)
{
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = realloc(ps->a, ps->capacity * 2*sizeof(STDataType));
		if (tmp)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}
}
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	check(ps);
	ps->top++;
	ps->a[ps->top] = x;
	
}
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > -1);
	ps->top--;
}
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > -1);
	return ps->a[ps->top];
}
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top+1;
}
int StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == -1;
}
