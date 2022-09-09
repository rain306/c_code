#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n/10);   //假设num=1234，则进入函数后先判断，1234>9，则除以10得到123,123进入下一级调用，得到12，最终
	                  //得到1,1不满足if语句，开始打印1，之后调用结束，继续上一级函数，将12取模打印得到2，依次得到1 2 3 4
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