#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//���1-1000�ڱ�3��5��7���������� for
	int i = 1;
	for(i = 1 ;i<=1000 ;i++)
	{
		if(i%3==0 && i%5==0 && i%7==0)
		{
			printf("%4d",i);
		}
	}
	printf("\n");
	return 0;
}