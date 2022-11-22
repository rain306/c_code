#define _CRT_SECURE_NO_WARNINGS 1
#include "Dlist.h"
void test()
{
	ListNode* plist = NULL;
	plist =ListInit();
	//ListPrint(plist);
	ListPushBack(plist, 1);
	ListPushBack(plist, 1);
	ListPushBack(plist, 3);
	ListPushBack(plist, 1);
	ListPushBack(plist, 1);
	ListPrint(plist);
	ListPushFront(plist,2);
	ListPushFront(plist,-1);
	ListPrint(plist);
	ListPopFront(plist);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
	ListNode* pos = ListFind(plist,3);
	/*if (pos)
	{
		printf("找到了!\n");
	}
	else
	{
		printf("没有找到\n");
	}*/

	ListInsert(pos, 4);
	ListPrint(plist);
	ListErase(pos);
	ListPrint(plist);
	ListDestory(plist);
}
int main()
{
	test();

	return 0;
}