#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
enum sex {
	male,female,secret

};//枚举常量中每个常量都有一个固定值，从0开始，如male的值为0，female的值为1，其值不能更改
int main()
{	
	#define MAX 10;//定义了一个标识符常量max，值为10
	const int num = 10;
	//num = 3;
	printf("num=%d\n", num);
	printf("male=%d\n", male);
	printf("female=%d\n", female);
	printf("secret=%d\n", secret);
	enum sex 性别 = male;//这里定义一个变量叫性别，并把枚举常量sex中常量male的值（0）赋给性别
	printf("性别=%d\n", 性别);
	性别 = female;//此时性别的值更改为female（1）
	printf("性别=%d\n", 性别);
	return 0;
}