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
	int size;//Ԫ�ظ���
	int contain;//����
}sl;
void iniSql(sl* ps);//��ʼ��(���ٿռ�,��ʼ������)
void check(sl* ps);//�������
void sqlPrint(sl* ps);//��ӡ˳���
void sqlPushFront(sl* ps,type x);//ͷ��(����λ��������)
void sqlPushBack(sl* ps,type x);//β��(��ĩβ��������)
void sqlPopFront(sl* ps);//ͷɾ
void sqlPopBack(sl* ps);//βɾ
void sqlInsert(sl*ps,int pos,type x);//����λ�ò���(�������)
void sqlErase(sl* ps, int pos);//����λ��ɾ��
void sqlDestory(sl* ps);//�ͷſռ�
int sqlFind(sl* ps,type x);//����
void sqlModify(sl* ps, int pos, type x);//�޸�ָ��λ��
