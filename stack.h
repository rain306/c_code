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

void StackInit(ST* ps);//��ʼ��
void StackDestory(ST* ps);//�ͷſռ�
void StackPush(ST* ps, STDataType x);//��ջ
void StackPop(ST* ps);//��ջ
STDataType StackTop(ST* ps);//ȡ����
int StackSize(ST* ps);//ȡ��С
int StackEmpty(ST* ps);//�ж��Ƿ�Ϊ��
