#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//void print(int n)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >=1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}
//找相同的数字用与& 找不同的数字用异或^
//不使用if for 比较两个数的大小
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					if (a*b*c*d*e == 120)//防止名次重复
					{
						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1))
							printf("A=%d,B=%d,C=%d,D=%d,E=%d", a, b, c, d, e);
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
//谋杀案
int main()
{
	int i = 0;
	int sum = 0;
	char killer = 0;
	for (i = 1; i <= 4; i++)
	{
		killer = 64 + i;
		sum = (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D');
		if (sum == 3)
			printf("%c is killer\n", killer);
	}
	system("pause");
	return 0;
}
//杨辉三角
int main()
{
	int a[100][100] = { 1 };//int(*arr)[100]  数组指针    *arr[100]指针数组
	int i = 0;
	int j = 0;
	int x = 0;//代表要打印的行数
	scanf("%d", &x);
	for (i = 1; i <= x; i++)
		a[i][1] = a[i][i] = 1;
	for (i = 2; i <= x; i++)
	{
		for (j = 2; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}