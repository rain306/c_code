#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int  x = 1;
    int find = 1;
    while(1);
    {
        if (x % 2 == 1 && x % 3 == 2 && x % 5 == 4 && x % 6 == 5 && x % 7 == 0)
        {
            printf("x = %d\n", x);
            break;
        }
        x++;
    }
    return 0;
}