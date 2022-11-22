#pragma once
#include "slist.h"
SlistPrint(  SLTNode*const pplist)
{
	SLTNode* cur = pplist;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
SLTNode* BugSListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
SlistPushBack(SLTNode** pplist,SLTDataType x)
{
	SLTNode* newnode=BugSListNode(x);
	
	if (!*pplist)
	{
		*pplist = newnode;
	}
	else
	{
		SLTNode* tail = *pplist;
		while (tail->next)//找尾节点
		{
			
			tail = tail->next;
		}
		tail->next = newnode;//在尾节点后链接新节点
	}
}
SlistPushFront(SLTNode** pplist, SLTDataType x)
{
	SLTNode* newnode = BugSListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
SlistPopBack(SLTNode** pplist)
{
	if (!*pplist)
	{
		return;
	}
	else if (!(*pplist)->next)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SLTNode* tail = *pplist;
		SLTNode* pre = NULL;
		while (tail->next)
		{
			pre = tail;
			tail = tail->next;//这样把赋值放下面会使得pre总是比tail慢一步
		}
		free(tail);
		pre->next = NULL;
	}
}
SlistPopFront(SLTNode** pplist)
{
	if (!*pplist)
	{
		return;
	}
	else
	{
		SLTNode* tmp = (*pplist)->next;
		free(*pplist);
		*pplist = tmp;
	}
}
SLTNode* SListFind(SLTNode* plist,SLTDataType x)
{
	
	SLTNode* cur = plist;
	while (cur)
	{
		if(cur->data==x)
		{
			return cur;
		}
			cur=cur->next;
	}
	return NULL;
}
SlistInsert(SLTNode** pplist, SLTNode* pos, SLTDataType x)
{
	if (pos == *pplist)
	{
		SlistPushFront(pplist, x);
	}
	else
	{
		SLTNode* newnode = BugSListNode(x);
		SLTNode* pre = *pplist;
		while (pre->next != pos)
		{
			pre = pre->next;
		}
		pre->next = newnode;
		newnode->next = pos;
	}
}
SlistErase(SLTNode** pplist, SLTNode* pos)
{
	if (pos == *pplist)
	{
		SlistPopFront(pplist);
	}
	else
	{
		SLTNode* pre = *pplist;
		while (pre->next != pos)
		{
			pre = pre->next;
		}
		pre->next = pos->next;
		free(pos);
	}
}