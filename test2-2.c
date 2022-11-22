#define _CRT_SECURE_NO_WARNINGS 1
#include "SQL.h"
//void testIniSql()
//{
//	
//	iniSql(&s1);
//	sqlPushBack(&s1, 1);
//	sqlPushBack(&s1, 2);
//	sqlPushBack(&s1, 3);
//	sqlPushBack(&s1, 4);
//	sqlPushBack(&s1, 5);
//	sqlPushBack(&s1, 6);
//	sqlPrint(&s1);
//	sqlPushFront(&s1, 0);
//	sqlPrint(&s1);
//	sqlPopBack(&s1);
//	sqlPrint(&s1);
//	sqlPopFront(&s1);
//	sqlPrint(&s1);
//	sqlInsert(&s1, 2, 9);
//	sqlPrint(&s1);
//	sqlErase(&s1, 2);
//	sqlPrint(&s1);
//	printf("%d\n",sqlFind(&s1, 2));
//	sqlModify(&s1, 2, 8);
//	sqlPrint(&s1);
//}
void menu()
{
	printf("********************************\n");
	printf("1.尾插 2.头插\n");
	printf("3.尾删 4.头删\n");
	printf("5.打印 0.退出\n");
	printf("********************************\n"); 
	printf("请输入你的操作选项:");
}
int main()
{
	sl s1;
	iniSql(&s1);
	int option = 1;
	int input = 0;
	do
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
		{
			printf("请输入数据:>");
			scanf("%d", &input);
			sqlPushBack(&s1, input);
			break;
		}
		case 2:
		{
			printf("请输入数据:>");
			scanf("%d", &input);
			sqlPushFront(&s1, input);
			break;
		}
		case 3:
		{
			sqlPopBack(&s1, input);
			break;
		}
		case 4:
		{
			sqlPopFront(&s1);
			break;
		}
		case 5:
		{
			sqlPrint(&s1);
			break;
		}
		default:
			printf("输入错误!请重新输入:>");
		}
	} while (option);
	//testIniSql();

	void sqlDestory(sl * ps);
	return 0;
}