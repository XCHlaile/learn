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
	//ѧϰC����
	//0��ʾ�٣���0Ϊ��

	int ch = 0;
	while((ch = getchar())!=EOF){  //ctrl+z == EOF  end of file
		putchar(ch);
	}



	//while���
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



	////switch ��� ����Ƕ��ʹ��


	////switch��ʹ�ã���m,n��ֵ
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
	//switch(day)//�����б���������
	//{
	//	//case ������������γ������ʽ
	//	case 1:
	//		printf("����һ\n");
	//		break;
	//	case 2:
	//		printf("���ڶ�\n");
	//		break;
	//	case 3:
	//		printf("������\n");
	//		break;
	//	case 4:
	//		printf("������\n");
	//		break;
	//	case 5:
	//		printf("������\n");
	//		break;
	//	case 6:
	//		printf("������\n");
	//		break;
	//	case 7:
	//		printf("������\n");
	//		break;
	//	//default �������� 
	//	default:
	//		printf("�������\n");
	//		break;
	//}


	//100���ڵ�����
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
		printf("��������==���\n");
	}*/
	/*int age = 20;
	if (age<18){
		printf("δ����\n");
	}
	else if (age>=18 && age<28){
		printf("����\n");
	}*/
	return 0;
}