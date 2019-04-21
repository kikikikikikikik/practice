#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//打印菱形
int main()
{
	int i, j;
	int line = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < line - i - 1; j++)
			printf(" ");
		for (j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		for (j = 0; j <= i; j++)
			printf(" ");
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}
//打印水仙花数
int main()
{
	int i = 0;
	for (i = 0; i < 999999; i++)
	{
		int sum = 0;
		int count = 0;
		int temp = i;
		while (temp != 0)
		{
			count++;
			temp /= 10;

		}
		temp = i;
		while (temp != 0)
		{
			sum += pow(temp % 10, count);
			temp = temp / 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}

	}
	system("pause");
	return 0;
}
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
int main()
{
	int n = 0;
	int a = 0;
	int i = 0;
	int sum = 0;
	int temp = 0;
	scanf("%d%d", &n, &a);
	for (i = 0; i < n; i++)
	{
		temp = temp * 10 + a;
		sum += temp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}