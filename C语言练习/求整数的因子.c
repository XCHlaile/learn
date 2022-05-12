#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int num = 0;
	int i = 0;
	scanf("%d",&num);
	getchar();
	for (i = 1;i<=pow(num,0.5) ;i++)
	{
		if(num%i==0)
		{	
			if(i==num/i)
			{
				printf("%d\n",i);
			}
			else
			{
				printf("%d\n",i);
			printf("%d\n",num/i);
			}
		}	
	}
	return 0;
}