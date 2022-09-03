#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ch;
	int a = 0;
	while (a < 10)
	{	
		a++;
		if (a == 5)
		{
			continue;
		}
		printf("%d\n", a);
	}
	//while ((ch = getchar()) != EOF)
	//	putchar(ch);
	return 0;
}