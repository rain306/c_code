#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001-补码(三码相同)
	//float视角看作 S E M,
	float* pfloat = (float*)&n;
	printf("%d\n", n);
	printf("%f\n", *pfloat);//按S E M取出 E全为0 ,则E是-127,M前面补0,就是 (-1)*0* 0.000000000000000001001 * 2^-126
	//而float只取到小数点之后6位,就是0.000000
	*pfloat = 9.0;
	//0 10000010 00100000000000000000000
	printf("%d\n", n);//按整型视角看就是一个大的数字,而不是按S E M取出
	printf("%f\n", *pfloat);


	return 0;
}