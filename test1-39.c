#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int cmp_float(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
}
int main()
{
	test();
	return 0;
}