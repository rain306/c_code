#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char buf[10];
	int a = 0;
	char buf2[10];
	//int ch = fgetc(stdin);
	//fputc(ch, stdout);
	fgets(buf, 1024, stdin);
	fputs(buf, stdout);
	gets(buf2);
	puts(buf2);
	fscanf(stdin, "%d", &a);
	fprintf(stdout, "%d", a);
	return 0;
}