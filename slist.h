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
SlistPrint(SLTNode* pplist);//��ӡ
SlistPushBack(SLTNode** plist,SLTDataType x);//β��
SlistPushFront(SLTNode** pplist, SLTDataType x);//ͷ��
SlistPopBack(SLTNode** pplist);//βɾ
SlistPopFront(SLTNode** pplist);//ͷɾ
SLTNode* SListFind(SLTNode* plist, SLTDataType x);//����
SlistInsert(SLTNode** pplist,SLTNode*pos,SLTDataType x);//�������
SlistErase(SLTNode** pplist, SLTNode* pos);//���ɾ��