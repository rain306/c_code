#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
enum sex {
	male,female,secret

};//ö�ٳ�����ÿ����������һ���̶�ֵ����0��ʼ����male��ֵΪ0��female��ֵΪ1����ֵ���ܸ���
int main()
{	
	#define MAX 10;//������һ����ʶ������max��ֵΪ10
	const int num = 10;
	//num = 3;
	printf("num=%d\n", num);
	printf("male=%d\n", male);
	printf("female=%d\n", female);
	printf("secret=%d\n", secret);
	enum sex �Ա� = male;//���ﶨ��һ���������Ա𣬲���ö�ٳ���sex�г���male��ֵ��0�������Ա�
	printf("�Ա�=%d\n", �Ա�);
	�Ա� = female;//��ʱ�Ա��ֵ����Ϊfemale��1��
	printf("�Ա�=%d\n", �Ա�);
	return 0;
}