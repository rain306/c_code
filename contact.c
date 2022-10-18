#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void Initcontact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//初始化为0
}
void Addcontact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入姓名>:");
		scanf("%s",&(ps->data[ps->size].name));
		printf("请输入年龄>:");
		scanf("%d",&(ps->data[ps->size].age));
		printf("请输入性别>:");
		scanf("%s",&(ps->data[ps->size].sex));
		printf("请输入电话>:");
		scanf("%s",&(ps->data[ps->size].tele));
		printf("请输入地址>:");
		scanf("%s",&(ps->data[ps->size].addr));
		ps->size++;
		printf("添加成功\n");


	}
}
void Showcontact(const struct Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
		printf("通讯录为空\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}

}
static int Find_Name(const struct Contact* ps, char name[MAX_NAME])//static修饰后使得函数只能在该文件内使用,防止与外部冲突
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (!strcmp(ps->data[i].name, name))
			return i;
	}
	return -1;
}
void Delcontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入删除人的名字>:");
	scanf("%s", name);
	int pos = Find_Name(ps,name);
	
	if (pos == -1)
		printf("要删除的人不存在\n");
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps -> size--;
		printf("删除成功\n");
		
	}

}
void Searchcontact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入查找人的名字>:");
	scanf("%s", name);
	int pos = Find_Name(ps, name);
	if (pos == -1)
		printf("要查找的人不存在\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}
}
void Modifycontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字");
	scanf("%s", name);
	int pos = Find_Name(ps, name);
	if (pos == -1)
		printf("要修改的人不存在\n");
	else
	{
		printf("请输入姓名>:");
		scanf("%s", &(ps->data[pos].name));
		printf("请输入年龄>:");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别>:");
		scanf("%s", &(ps->data[pos].sex));
		printf("请输入电话>:");
		scanf("%s", &(ps->data[pos].tele));
		printf("请输入地址>:");
		scanf("%s", &(ps->data[pos].addr));
		printf("修改完成\n");
	}
}
int struct_qsort(const void* a, const void* b)
{
	struct PeoInfo* x;
	struct PeoInfo* y;
	x = (struct PeoInfo*)a;
	y = (struct PeoInfo*)b;
	if (x->name < y->name)
		return -1;
	else 
		return 1;	
}
void Sortcontact(struct Contact* ps)
{
	qsort(ps->data,ps->size,sizeof(ps->data[0]),struct_qsort);
}
