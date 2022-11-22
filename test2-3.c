#pragma once
#include "slist.h"
void test()
{
	SLTNode* plist=NULL;
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 2);
	SlistPrint(plist);
	SlistPushFront(&plist, 0);
	SlistPrint(plist);
	SlistPopFront(&plist);
	SlistPopFront(&plist);
	SlistPopFront(&plist);
	SlistPopFront(&plist);
	SlistPopFront(&plist);
	SlistPopFront(&plist);
	SlistPopFront(&plist);
	SlistPopFront(&plist);
	SlistPrint(plist);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 1);
	SlistPrint(plist);
	SlistPopBack(&plist);
	SlistPopBack(&plist);
	SlistPopBack(&plist);
	SlistPopBack(&plist);
	SlistPopBack(&plist);
	SlistPopBack(&plist);
	SlistPopBack(&plist);
	SlistPrint(plist);
}
test2()
{
	SLTNode* plist = NULL;
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 2);
	SlistPushBack(&plist, 3);
	SlistPrint(plist);
	SLTNode* pos=SListFind(plist, 1);
	if (pos)
	{
		SlistInsert(&plist, pos, 30);
	}
	SlistPrint(plist);
}
test3()
{
	SLTNode* plist = NULL;
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 2);
	SlistPushBack(&plist, 3);
	SlistPrint(plist);
	SLTNode* pos = SListFind(plist, 1);
	if (pos)//ÅÐ¶ÏposÊÇ·ñÎªNULL
	{
		SlistErase(&plist,pos);
	}
	SlistPrint(plist);
}
int main()
{
	test3();
	return 0;
}