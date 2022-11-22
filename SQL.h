#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define type int
typedef struct sql
{
	type* arr;
	int size;//元素个数
	int contain;//容量
}sl;
void iniSql(sl* ps);//初始化(开辟空间,初始化数据)
void check(sl* ps);//检查容量
void sqlPrint(sl* ps);//打印顺序表
void sqlPushFront(sl* ps,type x);//头插(在首位插入数据)
void sqlPushBack(sl* ps,type x);//尾插(在末尾插入数据)
void sqlPopFront(sl* ps);//头删
void sqlPopBack(sl* ps);//尾删
void sqlInsert(sl*ps,int pos,type x);//任意位置插入(随机插入)
void sqlErase(sl* ps, int pos);//任意位置删除
void sqlDestory(sl* ps);//释放空间
int sqlFind(sl* ps,type x);//查找
void sqlModify(sl* ps, int pos, type x);//修改指定位置
