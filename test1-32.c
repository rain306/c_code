#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 typedef struct stu  //typefef重命名结构体类型为Stu
{
	char name[20];
	int age;
	char phone[];

}Stu;
 int main()
 {
	 struct stu s1 = { "张三",20,"13900000000" };
	 Stu s2 = { "李四",21,"18800000000" };
	 /*int a = 2;
	 int b = 3;
	 printf("结果是%lf",(double)a/b);*/
	 printf("%s\n", s1.phone);
	 printf("%s\n", (&s1)->phone);//箭头使用是地址指向变量名 ,一般用 指针->成员变量
	 return 0;
 }