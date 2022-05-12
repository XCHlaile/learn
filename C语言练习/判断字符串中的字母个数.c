#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char c;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("请入一串字符，以'#'结束\n");
	scanf("%c",&c);
	while(c!='#')
	{
		if (c>='a' && c<='z')
		{
			num1++;
		}
		else if (c>='A' && c<='Z')
		{
			num2++;
		}
		else if(c>='0' && c<='9')
		{
			num3++;
		}
		scanf("%c",&c);
	}
	printf("小写字母个数：%d\n大写字母个数：%d\n数字个数：%d\n",num1,num2,num3);
	return 0;
}