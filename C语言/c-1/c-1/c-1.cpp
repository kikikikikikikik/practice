#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//输出素数
int Prime(int i)
{
	int j = 0;
	for (j = 2; j < sqrt(i); j++)
	{
		if (i%j == 0)
		{
			return 0;
		}
		if (j >= sqrt(i))
		{
			return 1;
		}
	}
int main()
{
	int j;
	int i = 0;
	for (i = 100; i < 200; i += 2)
	{
		if (Prime(i))
		{
			printf("%d\n", i);			}
		}
	system("pause");
	return 0;
}
//输出乘法口诀表
void mul(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
			printf("%2d*%d=%-2d", i, j, i*j);
		printf("\n");
	}
}
int main()
{
	int n = 0;
	int i = 0;
	printf("输入数字\n");
	scanf("%d", &n);
	mul(n);
	printf("\n");
	system("pause");
	return 0;
}
//判断闰年
int leap(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 0; year < 2000; year++)
	{
		if (leap(year))
			printf("%d is leap year\n", year);
	}
	system("pause");
	return 0;
}