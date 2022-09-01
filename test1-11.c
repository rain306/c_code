#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct book
{
	char name[20];//cÓïÑÔ³ÌÐòÉè¼Æ
	short price;//55
};
int main()
{
	struct book b1 = { "cÓïÑÔ³ÌÐòÉè¼Æ",55 };
	printf("name=%s\n", b1.name);
	printf("price=%d\n", b1.price);
	b1.price = 15;
	printf("ÐÞ¸Äºóprice = %d\n", b1.price);
	struct book *pb = &b1;
	printf("%p\n", pb);
	//printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	strcpy(b1.name, "c++");//strcpy = string copy ¡ª¡ª×Ö·û´®¿½±´-¿âº¯Êý£¨string.h£©
	printf("%s\n", b1.name);

	return 0;
}