#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int i;//全局变量默认为0
int main()
{
	//int a = 0x11223344;//其中内存中倒着存放:44 33 22 11
	//short c = 11;
	//char* pa = &a;
	//*pa = 0;//char指针只能操作一位字节,即把 44 改成 00 ,打印时将内存中数据拿出来就是 11223300
	//printf("%x", a);
	i--;
	if (i > sizeof(i))//此时i为-1,但是这里 i > sizeof(i)--(4),sizeof计算内存大小,默认返回无符号
		printf(">");//无符号大于整型,整型提升下i变成无符号数,-1补码为32个1,当变成无符号位时
	else			//最高位不再表示符号,则i就是 32个1 (正数三码相同),故 i > sizeof(i)
		printf("<");
	return 0;
}