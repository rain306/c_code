#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int line = 0 ;
	while (line < 20000)
	{
		line++;
		printf("´úÂëÊý£º%d\n", line);
		
	}
	if (line >= 20000)
		printf("good!\n");
	return 0;
}
