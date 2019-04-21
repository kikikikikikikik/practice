#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int Fact(int n)//递归实现阶乘
//{
//	if (n<=1)
//		return n;
//	else return n*Fact(n - 1);
//}
int fact(int n)//非递归实现阶乘
{
	int i = 0;
	int s = 1;
	for (i = 0; i <= n;n--,i++)
	{
		s *= n;
		i = 1;
	}
	return s;
}
int main()
{
	int n=0;
	int result1 = 0;
	int result2 = 0;
	scanf("%d", &n);
	//result1=Fact(n);
	result2 = fact(n);
	//printf("%d\n", result1);
	printf("%d\n", result2);
	system("pause");
	return 0;
}