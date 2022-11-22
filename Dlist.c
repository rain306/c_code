#define _CRT_SECURE_NO_WARNINGS 1
#include "Dlist.h"
ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* tail = phead->prev;//无需考虑空节点,哨兵位本身有地址,不会报错且哨兵位双向循环指向自己
	ListNode* newnode = BuyListNode(x);
	tail->next = newnode;
	newnode->prev = tail;//这样写next紧接着写prev会思路更清晰些

	newnode->next = phead;
	phead->prev = newnode;
}
void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur!=phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* first = phead->next;
	ListNode* newnode = BuyListNode(x);

	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = first;
	first->prev = newnode;


}
void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->prev != phead);
	ListNode* tail = phead->prev;
	ListNode* prev = tail->prev;
	
	prev->next = phead;
	phead->prev =prev;

	free(tail);
	tail = NULL;


}
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* first = phead->next;
	ListNode* second = first->next;
	phead->next = second;
	second->prev = phead;
	free(first);
	first = NULL;
}
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
		ListNode* cur = phead->next;
		while (cur!=phead)
		{
			if (cur->data == x)
				return cur;
			cur = cur->next;
		}
		return NULL;
}
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;

	prev->next = next;
	next->prev = prev;

	free(pos);
	pos = NULL;
}
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* newnode = BuyListNode(x);
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}
void ListDestory(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);//将哨兵位单独放在外面删除,便于置指针为空
	phead = NULL;
}