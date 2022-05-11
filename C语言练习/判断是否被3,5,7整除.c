#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
    scanf("%d", &n);
    if (n % 3 == 0) printf("3 ");
    if (n % 5 == 0) printf("5 ");
    if (n % 7 == 0) printf("7 ");
    if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0) printf("不能被3,5,7任一个整除\n");

	return 0;
}