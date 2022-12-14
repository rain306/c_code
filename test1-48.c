#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
		
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	if (*p2 == '\0')
		return p1;
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1&&*s2&& (*s1 == *s2))//这里*s1==*s2也可以写成  !*(s1-s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return cur;
		cur++;
	}
	return NULL;
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "bc";
	char* p3 = my_strstr(p1, p2);
	printf("%s", p3);
	return 0;
}