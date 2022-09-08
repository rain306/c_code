#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>c
int exchange(int* x, int* y)
{
	int tmp;
	tmp = *x;//*表示解引用操作
	*x = *y;
	*y = tmp;
}
int is_prime(int n)
{
	if (n % 2 != 0&&n%5!=0)
	{
		int i =0;
		for(i=3;i<=sqrt(n);i++)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}
int main()
{
	/*int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	exchange(&a, &b);
	printf("a=%d,b=%d", a, b);*/
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		if (is_prime(i) == 1)
			printf("%d是素数\n", i);
		else
			printf("%d不是素数\n", i);
	}

	return 0;
}