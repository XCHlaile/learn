#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#define N 50            //�궨�� N=50
struct Stu              //�ṹ�嶨������
{
	char num[12];    //�绰����
	char sex[10];   //�Ա� man/woman
	char name[20];   //����
};
struct Stu s[N];
struct Stu s[N]={{"15779539175","man","xiao"},{"15770628212","man","ruan"},{"15390880418","man","chen"},{"13870274911","man","long"}};
int i;
int main()
{
	int a;
	void xiaohong();     //��������
    void menu();         //��������
	void delete1();      //��������
	void query();        //��������
	void revise();       //��������
	void delete1();      //��������
	menu();              //��������
    scanf("%d",&a);
	while(a)                                   //ѭ������
	{
     switch(a)
	 {
     case 1:xiaohong();break;                 //����"xiaohong()"�������
     case 2:query();break;                    //����"query()"�������
     case 3:revise();break;                   //����"revise()"�������
     case 4:delete1();break;                  //����"delete1()"�������
     case 5:printf("��л����ʹ��\n");break;   
     default:printf("�������");break;
	 }
    menu();                                   //����"menu()"
	scanf("%d",&a);                           //�Ƿ�ѭ��
	}
	return 0;
}
             //ͬѧͨѶ¼��ѡ�����

void menu()
{
    printf("���������������������������\n");
    printf("****************************************************\n");
    printf("                   �༶ͬѧͨѶ                     \n");
    printf("     1.��������     \n");
    printf("     2.��ѯ����     \n");
    printf("     3.�޸�����     \n");
	printf("     4.ɾ������     \n");
    printf("���������������������������\n");
    printf("                   �˳��밴5                        \n");
    printf("****************************************************\n");
}
                   /*          ���빦��              */
                   //�����ˣ�������
void xiaohong()
{                                     
	char ch[2];
	printf("���������������������������\n");
	printf("                 ��ӭ�����������                     \n");
	printf("        �����밴:��Y/y��\n");
	printf("        �����밴:(N/n)\n");
	scanf("%s",&ch);
	if(strcmp(ch,"n")==0||strcmp(ch,"N")==0)             //�ж��Ƿ��������
		return;
	else
	{
	while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)     //�ж��Ƿ�������� 
	{
	printf("����������:");
	scanf("%s",s[i].name);                            //���������������s[i].name
	printf("�������Ա�:");
	scanf("%s",s[i].sex);                              //��������Ա𸳸�s[i].sex
	printf("������绰����:");
	scanf("%s",s[i].num);                              //������ĵ绰���븳��s[i].num
	i++;                                              //���ο��Խ����鸳ֵ
	printf("�Ƿ�Ҫ�������룿��y/n��:");
	scanf("%s",&ch);
	}
    printf("����ɹ�!\n");
	}
}
                   /*        ��ѯ����         */
              //������:������
void query()
{
	int c,a;
	char d[20];
	char ch[2];
	a=0;
	printf("****************************************************\n");
	printf("                ��ӭ������ѯ����\n");
	printf("������ѯ�밴:1\n");
	printf("�����밴:2\n");
	printf("������:");
	scanf("%d",&c);
	if(c==1)
	{
		printf("ȷ����ѯ��(y/n)\n");
		scanf("%s",&ch);
		while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)         //�ж��Ƿ�Ҫ������ѯ
		{ 
		 printf("��������Ҫ��ѯ������:");
	     scanf("%s",&d);
		 while(strcmp(d,s[a].name)!=0&&a<N)                //���������������s[i].name���Ƚϣ������������ͬ���ַ������������˵���Ϣ
		 {
		    if(a==49)
			{
				printf("���޴���\n");                       //�Ҳ��������������������򡰲��޴��ˡ�������������
				return;
			}
			a++;
		 }
	      printf("����ѯ����Ϊ:%s\n",s[a].name);
		  printf("����ѯ���˵ĵ绰����:%s\n",s[a].num);
	      printf("����ѯ���˵��Ա�Ϊ:%s\n",s[a].sex);
		  printf("\n");
		  printf("�Ƿ������ѯ?(y/n)\n");                   //�ж��Ƿ������ѯ��������ѯ������ٴ�ѭ��
		  scanf("%s",&ch);
		}
	}
	else
			 return;
}
        /*                �޸Ĺ���           */
         //������:Ф���
void revise()
{
    int a,b;
	char d[20];
	char ch[2];
	b=0;
    printf("****************************************************\n");
	printf("                ��ӭ�����޸Ľ���\n");
	printf("�����޸��밴:1\n");
	printf("�Ա��޸��밴:2\n");
	printf("�绰�޸��밴:3\n");
	printf("�����밴:4\n");
	printf("������:");
	scanf("%d",&a);
	if(a==1)
	{
		    printf("ȷ���޸�������(y/n)\n");
		    scanf("%s",&ch);
		    while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)             //�ж��Ƿ�ȷ���޸�����
			{
			printf("��������Ҫ�޸ĵ�����:");
		    scanf("%s",&d);
			while(strcmp(d,s[b].name)!=0&&b<N)                      //�ж�s[i].name���Ƿ�����Ҫ�޸ĵ�����
			{
				if(b==49)
				{	printf("���޴���\n");
				    printf("\n");
				    return;
				}
				b++;
			}
			printf("��������Ҫ�޸ĺ������:");                
			scanf("%s",s[b].name);                             //������Ҫ�޸ĺ������
			printf("�޸ĳɹ�\n");
			printf("�Ƿ�����޸ģ�(y/n)\n");                    //�ж��Ƿ�����޸�
			scanf("%s",&ch);
			}
	}
	else if(a==2)
	{
		    printf("ȷ���޸��Ա�(y/n)\n");
		    scanf("%s",&ch);
		    while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)         //�ж��Ƿ�����޸��Ա�
			{
			 printf("��������Ҫ�޸ĵ��Ա������:");
		     scanf("%s",&d);
			 while(strcmp(d,s[b].name)!=0&&b<N)                  //��s[i].name��Ѱ�������������
			 {
				if(b==49)
				{
					printf("���޴���\n");                        //û�������������������������
					printf("\n");
					return;
				}
				b++;
			 }
		 	 printf("��������Ҫ�޸ĺ���Ա�:");
			 scanf("%s",s[b].sex);
			 printf("�޸ĳɹ�\n");
			 printf("�Ƿ�����޸ģ�(y/n)\n");
			 scanf("%s",&ch);                                     //�ж��Ƿ�����޸��Ա�
			}
			return;
	}
	else if(a==3)
	{		printf("ȷ���޸ĵ绰���룿(y/n)\n");
		    scanf("%s",&ch);
		    while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)            //�ж��Ƿ�����޸ĵ绰����
			{
		     printf("��������Ҫ�޸ĵĵ绰������:");
		     scanf("%s",&d);
			 while(strcmp(d,s[b].name)!=0&&b<N)                     //��s[i].name��Ѱ�������������
			 {
				if(b==49)
				{
					printf("���޴���\n");
					return;
				}
				b++;
			 }
			 printf("��������Ҫ�޸ĺ�ĵ绰:");
		 	 scanf("%s",s[b].num);
			 printf("�޸ĳɹ�\n");
			 printf("�Ƿ�����޸ģ�(y/n)\n");
			 scanf("%s",&ch);                               //�ж��Ƿ�����޸ĵ绰����
			}
            return;
	}
	else
		printf("�����������������\n");
	    return;
}
               /*                  ɾ������         */
                //������:������
void delete1()
{
	int b,a;
	char d[20];              //����һ���ַ���
	char ch[2];              //����һ���ַ���
	a=0;
	printf("****************************************************\n");
	printf("\t��ӭ����ɾ������\n");
	printf("\tɾ�������밴:1\n");
	printf("\tɾ���绰�����밴:2\n");
	printf("\t���أ��밴:3\n");
	scanf("%d",&b);
	if(b==1)
	{
		printf("ȷ��ɾ��������(y/n)\n");
		scanf("%s",&ch);
		while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)                //�ж��Ƿ����ɾ������
		{ printf("��������Ҫɾ��������:");
	      scanf("%s",&d);
	      while(strcmp(d,s[a].name)!=0&&a<N)                       //�ж�s[i].name�������
		  {
		     if(a==49)
			 {
			 printf("ͨѶ¼��û�д���\n");
			 return;
			 }
		     else
			 a++;
		  }
         s[a]=s[a+1];   //����������ݸ�ֵ��ǰ���
	     printf("ɾ���ɹ�\n");
		 printf("�Ƿ����ɾ��������(y/n)\n");
		 scanf("%s",&ch);
		}
	} 
	if(b==2)
	{
		printf("ȷ��ɾ���绰���룿(y/n)\n");
		scanf("%s",&ch);
		while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)
		{ 
			printf("��������Ҫɾ���ĵ绰����:");            //�ж��Ƿ����ɾ���绰����
	        scanf("%s",&d);
	        while(strcmp(d,s[a].num)!=0&&a<N)
			{
		      if(a==49)
			  {
			  printf("ͨѶ¼��û�д���\n");
			  return;
			  }
			  else 
			  a++;
			}
			s[a]=s[a+1];
			printf("ɾ���ɹ�\n");
		    printf("�Ƿ����ɾ���绰���룿(y/n)\n");
		   scanf("%s",&ch);
		}
		return;
	} 
	if(b==3)
		   return;
	else
	{
	printf("�����������������");
	return;
	}
}