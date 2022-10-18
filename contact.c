#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void Initcontact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//��ʼ��Ϊ0
}
void Addcontact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������>:");
		scanf("%s",&(ps->data[ps->size].name));
		printf("����������>:");
		scanf("%d",&(ps->data[ps->size].age));
		printf("�������Ա�>:");
		scanf("%s",&(ps->data[ps->size].sex));
		printf("������绰>:");
		scanf("%s",&(ps->data[ps->size].tele));
		printf("�������ַ>:");
		scanf("%s",&(ps->data[ps->size].addr));
		ps->size++;
		printf("��ӳɹ�\n");


	}
}
void Showcontact(const struct Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
static int Find_Name(const struct Contact* ps, char name[MAX_NAME])//static���κ�ʹ�ú���ֻ���ڸ��ļ���ʹ��,��ֹ���ⲿ��ͻ
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
	printf("������ɾ���˵�����>:");
	scanf("%s", name);
	int pos = Find_Name(ps,name);
	
	if (pos == -1)
		printf("Ҫɾ�����˲�����\n");
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps -> size--;
		printf("ɾ���ɹ�\n");
		
	}

}
void Searchcontact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("����������˵�����>:");
	scanf("%s", name);
	int pos = Find_Name(ps, name);
	if (pos == -1)
		printf("Ҫ���ҵ��˲�����\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����");
	scanf("%s", name);
	int pos = Find_Name(ps, name);
	if (pos == -1)
		printf("Ҫ�޸ĵ��˲�����\n");
	else
	{
		printf("����������>:");
		scanf("%s", &(ps->data[pos].name));
		printf("����������>:");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�>:");
		scanf("%s", &(ps->data[pos].sex));
		printf("������绰>:");
		scanf("%s", &(ps->data[pos].tele));
		printf("�������ַ>:");
		scanf("%s", &(ps->data[pos].addr));
		printf("�޸����\n");
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
