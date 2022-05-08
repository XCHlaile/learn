#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//查找有序数组中的一个值 二分查找优化
	int arr[] = {1,2,3,4,5,6,7,8,9,10};//有序数组
	int sz = sizeof(arr)/sizeof(arr[0]);
	int k = 7;
	int left = 0;//左下标
	int right = sz-1;//右下标
	while(left<=right)
	{
		int mid = (left+right)/2;
		if(arr[mid]<k)
		{
			left = mid+1;
		}
		else if(arr[mid]>k)
		{
			right = mid-1;
		}
		else
		{
			printf("找到了，下表：%d\n",mid);
			break;
		}
	}
	if(left>right)
	{
		printf("找不到\n");
	}


	////查找有序数组中的一个值
	//int arr[] = {1,2,3,4,5,6,7,8,9,10};//有序数组
	//int k = 7;
	//int i = 0;
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//for(i=0; i<sz; i++)
	//{
	//	if(k == arr[i])
	//	{
	//		printf("找到了，下标为：%d\n",i);
	//		break;
	//	}
	//}
	//if (i == sz){
	//	printf("找不到\n");
	//}
	return 0;
}