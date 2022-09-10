#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fac(int x)
{
	if (x <= 1)
		return 1;
	else
		return x* fac(x - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);

	return 0;
}