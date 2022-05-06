#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){

	//for(表达式1;表达式2;表达式3)
	int i = 0;
	for(i=1; i<=10; i++)
		printf("%d\n",i);


	//输出0-9的字符
	/*int ch = 0;
	while((ch = getchar()) != EOF)
	{
		if(ch<'0' || ch>'9')
			continue;
		putchar(ch);
	}*/

	//int ch = 0;
	////EOF - end of file文件结束标志
	//while ((ch=getchar()) != EOF)
	//{
	//	putchar(ch);
	//}

	//int ch = 0;
	//int ret = 0;
	//char password[20] = {0};
	//printf("请输入密码:>");
	//scanf("%s",&password);//输入密码，存放在passw
	////缓冲区还剩余'\n'
	////getchar();//读取'\n'
	//while((ch=getchar()) != '\n');//直到把缓冲区的数据读取完
	//printf("请确认（Y/N）:>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}
	//printf("%d\n",'\n');



	return 0;
}