#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//�����ж�
	int age = 0;
	scanf("%d",&age);
	getchar();
	if(age%4==0 && age%100!=0)
	{
		printf("%d��������\n",age);
	}else if(age%400==0)
	{
		printf("%d��������\n",age);
	}else
	{
		printf("%d�겻������\n",age);
	}
	return 0;
}