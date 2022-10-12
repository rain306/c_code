#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
void* my_memcpy(void* dest, void* src, int num)
{
	assert(dest!=NULL);
	assert(src!=NULL);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int i = 0;
	int arr1[] = {0};int arr4[] = {0};
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 1,2,3,4,5,6,7,8,9,10};
	//my_memcpy(arr1, arr2, sizeof(arr2));
	my_memmove(arr3,arr3+2,20);
	//for (i = 0; i < 5; i++)
		//printf("%d ", arr1[i]);
	for (i = 0; i < 10; i++)
		printf("%d ", arr3[i]);
	return 0;
}