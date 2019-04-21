#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//交换两个数组的值
void show(int arr[10], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int i = 0;
	show(arr1, 10);
	show(arr2, 10);
	show(arr1, 10);
	show(arr2, 10);
	system("pause");
	return 0;
}
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}
// 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}
