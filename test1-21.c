#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n/10);   //����num=1234������뺯�������жϣ�1234>9�������10�õ�123,123������һ�����ã��õ�12������
	                  //�õ�1,1������if��䣬��ʼ��ӡ1��֮����ý�����������һ����������12ȡģ��ӡ�õ�2�����εõ�1 2 3 4
	}
	printf("%d ", n % 10);
}
my_string(char* arr)
{
	if (*arr != '\0')
		return 1 + my_string(arr + 1);
	else
		return 0;
}
int main()
{
	/*unsigned int num = 0;
	scanf("%d", &num);
	print(num);*/
	char arr[] = "hello world!";
	scanf("%s", arr);
	printf("%s\n", arr);
	
	printf("lenth = %d", my_string(arr));


	return 0;
}