#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*int age = 0;
	printf("age = ");
	scanf("%d", &age);
	if (age <= 18)
		printf("δ����");
	else if (18 < age && age < 28)
		printf("����");
	else if (28 <= age && age < 48)
		printf("����");
	else
		printf("����");*/
	int a = 0;
	while (a < 100)
	{
		if (a % 2 == 1)
			printf("%d\n", a);
		a++;
	}

	return 0;
}