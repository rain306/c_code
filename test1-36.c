#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001-����(������ͬ)
	//float�ӽǿ��� S E M,
	float* pfloat = (float*)&n;
	printf("%d\n", n);
	printf("%f\n", *pfloat);//��S E Mȡ�� EȫΪ0 ,��E��-127,Mǰ�油0,���� (-1)*0* 0.000000000000000001001 * 2^-126
	//��floatֻȡ��С����֮��6λ,����0.000000
	*pfloat = 9.0;
	//0 10000010 00100000000000000000000
	printf("%d\n", n);//�������ӽǿ�����һ���������,�����ǰ�S E Mȡ��
	printf("%f\n", *pfloat);


	return 0;
}