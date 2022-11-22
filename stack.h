#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);//初始化
void StackDestory(ST* ps);//释放空间
void StackPush(ST* ps, STDataType x);//入栈
void StackPop(ST* ps);//出栈
STDataType StackTop(ST* ps);//取数据
int StackSize(ST* ps);//取大小
int StackEmpty(ST* ps);//判断是否为空
