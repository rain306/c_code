#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	struct S   //位段的使用来节省空间
	{
		int a : 2;
		int b : 5;
		int c : 10;//Int位段,开辟4字节空间,a,b,c占用17比特,浪费15比特,再开辟4字节空间存放d,浪费2比特;总共8字节大小
		int d : 30;
	}s;
	printf("%d", sizeof(s));//8字节

	return 0;
}