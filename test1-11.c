#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct book
{
	char name[20];//c���Գ������
	short price;//55
};
int main()
{
	struct book b1 = { "c���Գ������",55 };
	printf("name=%s\n", b1.name);
	printf("price=%d\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�price = %d\n", b1.price);
	struct book *pb = &b1;
	printf("%p\n", pb);
	//printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	strcpy(b1.name, "c++");//strcpy = string copy �����ַ�������-�⺯����string.h��
	printf("%s\n", b1.name);

	return 0;
}