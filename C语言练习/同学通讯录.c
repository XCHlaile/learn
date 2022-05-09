#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#define N 50            //宏定义 N=50
struct Stu              //结构体定义数组
{
	char num[12];    //电话号码
	char sex[10];   //性别 man/woman
	char name[20];   //姓名
};
struct Stu s[N];
struct Stu s[N]={{"15779539175","man","xiao"},{"15770628212","man","ruan"},{"15390880418","man","chen"},{"13870274911","man","long"}};
int i;
int main()
{
	int a;
	void xiaohong();     //函数声明
    void menu();         //函数声明
	void delete1();      //函数声明
	void query();        //函数声明
	void revise();       //函数声明
	void delete1();      //函数声明
	menu();              //函数声明
    scanf("%d",&a);
	while(a)                                   //循环界面
	{
     switch(a)
	 {
     case 1:xiaohong();break;                 //调用"xiaohong()"这个函数
     case 2:query();break;                    //调用"query()"这个函数
     case 3:revise();break;                   //调用"revise()"这个函数
     case 4:delete1();break;                  //调用"delete1()"这个函数
     case 5:printf("感谢您的使用\n");break;   
     default:printf("输入错误");break;
	 }
    menu();                                   //调用"menu()"
	scanf("%d",&a);                           //是否循环
	}
	return 0;
}
             //同学通讯录的选择界面

void menu()
{
    printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
    printf("****************************************************\n");
    printf("                   班级同学通讯                     \n");
    printf("     1.输入数据     \n");
    printf("     2.查询数据     \n");
    printf("     3.修改数据     \n");
	printf("     4.删除数据     \n");
    printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
    printf("                   退出请按5                        \n");
    printf("****************************************************\n");
}
                   /*          输入功能              */
                   //制作人：陈敏涛
void xiaohong()
{                                     
	char ch[2];
	printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
	printf("                 欢迎来到输入界面                     \n");
	printf("        继续请按:（Y/y）\n");
	printf("        返回请按:(N/n)\n");
	scanf("%s",&ch);
	if(strcmp(ch,"n")==0||strcmp(ch,"N")==0)             //判断是否继续输入
		return;
	else
	{
	while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)     //判断是否继续输入 
	{
	printf("请输入姓名:");
	scanf("%s",s[i].name);                            //将输入的姓名赋给s[i].name
	printf("请输入性别:");
	scanf("%s",s[i].sex);                              //将输入的性别赋给s[i].sex
	printf("请输入电话号码:");
	scanf("%s",s[i].num);                              //将输入的电话号码赋给s[i].num
	i++;                                              //依次可以将数组赋值
	printf("是否还要继续输入？（y/n）:");
	scanf("%s",&ch);
	}
    printf("输入成功!\n");
	}
}
                   /*        查询功能         */
              //制作人:龙中洋
void query()
{
	int c,a;
	char d[20];
	char ch[2];
	a=0;
	printf("****************************************************\n");
	printf("                欢迎来到查询界面\n");
	printf("姓名查询请按:1\n");
	printf("返回请按:2\n");
	printf("请输入:");
	scanf("%d",&c);
	if(c==1)
	{
		printf("确定查询？(y/n)\n");
		scanf("%s",&ch);
		while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)         //判断是否要继续查询
		{ 
		 printf("请输入您要查询的姓名:");
	     scanf("%s",&d);
		 while(strcmp(d,s[a].name)!=0&&a<N)                //将你输入的姓名与s[i].name作比较，如果其中有相同的字符，则输出这个人的信息
		 {
		    if(a==49)
			{
				printf("查无此人\n");                       //找不到你输入的这个姓名，则“查无此人”，返回主界面
				return;
			}
			a++;
		 }
	      printf("您查询的人为:%s\n",s[a].name);
		  printf("您查询的人的电话号码:%s\n",s[a].num);
	      printf("您查询的人的性别为:%s\n",s[a].sex);
		  printf("\n");
		  printf("是否继续查询?(y/n)\n");                   //判断是否继续查询，继续查询则可以再次循环
		  scanf("%s",&ch);
		}
	}
	else
			 return;
}
        /*                修改功能           */
         //制作人:肖存鸿
void revise()
{
    int a,b;
	char d[20];
	char ch[2];
	b=0;
    printf("****************************************************\n");
	printf("                欢迎来到修改界面\n");
	printf("姓名修改请按:1\n");
	printf("性别修改请按:2\n");
	printf("电话修改请按:3\n");
	printf("返回请按:4\n");
	printf("请输入:");
	scanf("%d",&a);
	if(a==1)
	{
		    printf("确定修改姓名？(y/n)\n");
		    scanf("%s",&ch);
		    while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)             //判断是否确定修改姓名
			{
			printf("请输入您要修改的姓名:");
		    scanf("%s",&d);
			while(strcmp(d,s[b].name)!=0&&b<N)                      //判断s[i].name中是否有你要修改的姓名
			{
				if(b==49)
				{	printf("查无此人\n");
				    printf("\n");
				    return;
				}
				b++;
			}
			printf("请输入您要修改后的姓名:");                
			scanf("%s",s[b].name);                             //输入你要修改后的姓名
			printf("修改成功\n");
			printf("是否继续修改？(y/n)\n");                    //判断是否继续修改
			scanf("%s",&ch);
			}
	}
	else if(a==2)
	{
		    printf("确定修改性别？(y/n)\n");
		    scanf("%s",&ch);
		    while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)         //判断是否继续修改性别
			{
			 printf("请输入您要修改的性别的姓名:");
		     scanf("%s",&d);
			 while(strcmp(d,s[b].name)!=0&&b<N)                  //在s[i].name中寻找你输入的姓名
			 {
				if(b==49)
				{
					printf("查无此人\n");                        //没有你输入的姓名，返回主界面
					printf("\n");
					return;
				}
				b++;
			 }
		 	 printf("请输入您要修改后的性别:");
			 scanf("%s",s[b].sex);
			 printf("修改成功\n");
			 printf("是否继续修改？(y/n)\n");
			 scanf("%s",&ch);                                     //判断是否继续修改性别
			}
			return;
	}
	else if(a==3)
	{		printf("确定修改电话号码？(y/n)\n");
		    scanf("%s",&ch);
		    while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)            //判断是否继续修改电话号码
			{
		     printf("请输入您要修改的电话的姓名:");
		     scanf("%s",&d);
			 while(strcmp(d,s[b].name)!=0&&b<N)                     //在s[i].name中寻找你输入的姓名
			 {
				if(b==49)
				{
					printf("查无此人\n");
					return;
				}
				b++;
			 }
			 printf("请输入您要修改后的电话:");
		 	 scanf("%s",s[b].num);
			 printf("修改成功\n");
			 printf("是否继续修改？(y/n)\n");
			 scanf("%s",&ch);                               //判断是否继续修改电话号码
			}
            return;
	}
	else
		printf("输入错误，请重新输入\n");
	    return;
}
               /*                  删除功能         */
                //制作人:阮声荣
void delete1()
{
	int b,a;
	char d[20];              //定义一个字符串
	char ch[2];              //定义一个字符串
	a=0;
	printf("****************************************************\n");
	printf("\t欢迎来到删除界面\n");
	printf("\t删除姓名请按:1\n");
	printf("\t删除电话号码请按:2\n");
	printf("\t返回，请按:3\n");
	scanf("%d",&b);
	if(b==1)
	{
		printf("确定删除姓名？(y/n)\n");
		scanf("%s",&ch);
		while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)                //判断是否继续删除姓名
		{ printf("请输入您要删除的姓名:");
	      scanf("%s",&d);
	      while(strcmp(d,s[a].name)!=0&&a<N)                       //判断s[i].name有这个人
		  {
		     if(a==49)
			 {
			 printf("通讯录中没有此人\n");
			 return;
			 }
		     else
			 a++;
		  }
         s[a]=s[a+1];   //将后面的数据赋值给前面的
	     printf("删除成功\n");
		 printf("是否继续删除姓名？(y/n)\n");
		 scanf("%s",&ch);
		}
	} 
	if(b==2)
	{
		printf("确定删除电话号码？(y/n)\n");
		scanf("%s",&ch);
		while(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)
		{ 
			printf("请输入您要删除的电话号码:");            //判断是否继续删除电话号码
	        scanf("%s",&d);
	        while(strcmp(d,s[a].num)!=0&&a<N)
			{
		      if(a==49)
			  {
			  printf("通讯录中没有此人\n");
			  return;
			  }
			  else 
			  a++;
			}
			s[a]=s[a+1];
			printf("删除成功\n");
		    printf("是否继续删除电话号码？(y/n)\n");
		   scanf("%s",&ch);
		}
		return;
	} 
	if(b==3)
		   return;
	else
	{
	printf("输入错误，请重新输入");
	return;
	}
}