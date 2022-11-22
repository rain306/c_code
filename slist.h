#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#define SLTDataType int
typedef struct SlistNode
{
	SLTDataType data;
	struct SlistNode* next;
}SLTNode;
SlistPrint(SLTNode* pplist);//打印
SlistPushBack(SLTNode** plist,SLTDataType x);//尾插
SlistPushFront(SLTNode** pplist, SLTDataType x);//头插
SlistPopBack(SLTNode** pplist);//尾删
SlistPopFront(SLTNode** pplist);//头删
SLTNode* SListFind(SLTNode* plist, SLTDataType x);//查找
SlistInsert(SLTNode** pplist,SLTNode*pos,SLTDataType x);//随机插入
SlistErase(SLTNode** pplist, SLTNode* pos);//随机删除