#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char c;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("����һ���ַ�����'#'����\n");
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
	printf("Сд��ĸ������%d\n��д��ĸ������%d\n���ָ�����%d\n",num1,num2,num3);
	return 0;
}