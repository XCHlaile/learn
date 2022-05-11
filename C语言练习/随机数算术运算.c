#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int x,y,z;
	char op;
	int flag = 1;
	srand(time(NULL));//真随机数 通过srand获得
	x = rand()%10;//随机产生变量x的值0-9
	y = rand()%10;//随机产生变量y的值0-9
	op = getchar();
	switch(op)
	{
	case '+':
		z = x + y;
		break;
	case '-':
		z = x - y;
		break;
	case '*':
		z = x * y;
		break;
	case '/':
		if(y == 0)
		{
			y = 1;
			break;
		}
		else
		{
			z = x /y;
			break;
		}
	default: 
		flag = 0;
	}
	if(flag == 1)
		printf("%d%c%d=%d\n",x,op,y,z);
	else
		printf("输入错误，%c不是四则运算！\n",op);
	return 0;
}
