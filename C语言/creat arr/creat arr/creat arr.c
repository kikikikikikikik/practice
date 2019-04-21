#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void print(int a[],int k)//打印
{
	int i = 0;
	for (i = 0; i < k; i++)
		printf("%d ", a[i]);//[]自带解引用 arr[i]===*(arr+i); 
	printf("\n");
}
int Reverse(int a[], int len,int i)
{
	int left = 0;
	int right = len-1;
	while (l <= r)
	{
		int temp = arr[l];
		a[l] = a[r];
		a[len - i] = a[i];
	}
}
int  reverse(int a[],int k)//数组倒置
{
	int *p;
	int temp = 0;
	p = a + k ;
	for (;a<p;a++,p--)
	{
		temp = *a;
		*a = *p;
		*p = temp;

	}
	return 1;
}
int empty(int a[], int k)//清空数组
{
	int i = 0;
	for (i = 0; i <= k; i++)
	{
		a[i] = 0;
	}
	return 1;

}
int main()
{
	int i;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//初始化数组
	int len=sizeof(arr)/sizeof(arr[0]);
	print(arr, len);
	for (i = 0; i < len; i++)
	{
		Reverse(arr, len,i );
	}
	print(arr, len);
	empty(arr, len - 1);
	print(arr, len);
	system("pause");
	return 0;
}