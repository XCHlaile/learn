#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){

	//for(���ʽ1;���ʽ2;���ʽ3)
	int i = 0;
	for(i=1; i<=10; i++)
		printf("%d\n",i);


	//���0-9���ַ�
	/*int ch = 0;
	while((ch = getchar()) != EOF)
	{
		if(ch<'0' || ch>'9')
			continue;
		putchar(ch);
	}*/

	//int ch = 0;
	////EOF - end of file�ļ�������־
	//while ((ch=getchar()) != EOF)
	//{
	//	putchar(ch);
	//}

	//int ch = 0;
	//int ret = 0;
	//char password[20] = {0};
	//printf("����������:>");
	//scanf("%s",&password);//�������룬�����passw
	////��������ʣ��'\n'
	////getchar();//��ȡ'\n'
	//while((ch=getchar()) != '\n');//ֱ���ѻ����������ݶ�ȡ��
	//printf("��ȷ�ϣ�Y/N��:>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("����ȷ��\n");
	//}
	//printf("%d\n",'\n');



	return 0;
}