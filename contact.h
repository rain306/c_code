#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact
{
	struct PeoInfo data[MAX];//记录通讯录信息
	int size;//记录通讯录已经存放元素个数
};
void Addcontact(struct Contact* ps);
void Initcontact(struct Contact* ps);
void Delcontact(struct Contact* ps);
void Searchcontact(struct Contact* ps);
void Modifycontact(struct Contact* ps);
void Sortcontact(struct Contact* ps);
void Showcontact(const struct Contact* ps);