#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <stdbool.h>
typedef int QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;
typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;
void QueueInit(Queue* pq);//初始化
void QueueDestory(Queue* pq);//释放空间
void QueuePush(Queue* pq,QDataType x);//入数据
void QueuePop(Queue* pq);//出数据
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);