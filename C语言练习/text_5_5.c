#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int text(int a){
//	if (0 == a)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
int main(){
	//学习C语言
	//0表示假，非0为真

	int ch = 0;
	while((ch = getchar())!=EOF){  //ctrl+z == EOF  end of file
		putchar(ch);
	}



	//while语句
	//int i = 1;
	//while(i<=10)
	//{	
	//	if (5 == i)
	//	{
	//		i++;
	//		continue;
	//	}
	//	/*if (5 == i)
	//		break;*/
	//	printf("%d\n",i);
	//	i++;
	//}



	////switch 语句 允许嵌套使用


	////switch的使用，求m,n的值
	//int n = 1;
	//int m = 2;
	//switch (n)
	//{
	//	case 1:
	//		m++;
	//	case 2:
	//		n++;
	//	case 3:
	//		switch(n)
	//		{
	//			case 1:
	//				n++;
	//			case 2:
	//				m++;
	//				n++;
	//				break;
	//		}
	//	case 4:
	//		m++;
	//		break;
	//	default:
	//		break;
	//}
	//printf("m = %d, n = %d\n",m,n);
	////m = 5, n = 3


	//int day = 0;
	//scanf("%d",&day);
	//switch(day)//括号中必须是整型
	//{
	//	//case 后面必须是整形常量表达式
	//	case 1:
	//		printf("星期一\n");
	//		break;
	//	case 2:
	//		printf("星期二\n");
	//		break;
	//	case 3:
	//		printf("星期三\n");
	//		break;
	//	case 4:
	//		printf("星期四\n");
	//		break;
	//	case 5:
	//		printf("星期五\n");
	//		break;
	//	case 6:
	//		printf("星期六\n");
	//		break;
	//	case 7:
	//		printf("星期天\n");
	//		break;
	//	//default 随便放哪里 
	//	default:
	//		printf("输入错误\n");
	//		break;
	//}


	//100以内的奇数
	//int i = 1;
	//while (i<=100)
	//{
	//	printf("%d\n",i);
	//	i+=2;
	//	/*if (1 == i%2){
	//		printf("%d\n",i);
	//	}*/
	//	/*i++;*/
	//}


	/*int a = 1;
	int num = 1;
	printf("%d\n",text(a));
	if (1 == num){
		printf("常量放在==左边\n");
	}*/
	/*int age = 20;
	if (age<18){
		printf("未成年\n");
	}
	else if (age>=18 && age<28){
		printf("青年\n");
	}*/
	return 0;
}