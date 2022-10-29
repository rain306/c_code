#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SQUART(X,Y) ((X)*(Y))
#define PRINT(X) printf("the value of "#X" is %d\n",X);
#define COMB(X,Y) X##Y
int main()
{
	int ret = 10*SQUART(5+2,2*6);  //10* (  (5+2)  *  (2*6)  ) =840
	printf("%d\n", ret);
	int a = 5;
	PRINT(a);//插入字符串a,并打印a的值
	int numMode = 10;
	printf("%d", COMB(num, Mode));//合并num和Mode为一个符号
	return 0;
}