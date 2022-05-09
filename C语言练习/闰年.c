#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//闰年判断
	int age = 0;
	scanf("%d",&age);
	getchar();
	if(age%4==0 && age%100!=0)
	{
		printf("%d年是闰年\n",age);
	}else if(age%400==0)
	{
		printf("%d年是闰年\n",age);
	}else
	{
		printf("%d年不是闰年\n",age);
	}
	return 0;
}