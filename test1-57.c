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
	PRINT(a);//�����ַ���a,����ӡa��ֵ
	int numMode = 10;
	printf("%d", COMB(num, Mode));//�ϲ�num��ModeΪһ������
	return 0;
}