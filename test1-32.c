#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 typedef struct stu  //typefef�������ṹ������ΪStu
{
	char name[20];
	int age;
	char phone[];

}Stu;
 int main()
 {
	 struct stu s1 = { "����",20,"13900000000" };
	 Stu s2 = { "����",21,"18800000000" };
	 /*int a = 2;
	 int b = 3;
	 printf("�����%lf",(double)a/b);*/
	 printf("%s\n", s1.phone);
	 printf("%s\n", (&s1)->phone);//��ͷʹ���ǵ�ַָ������� ,һ���� ָ��->��Ա����
	 return 0;
 }