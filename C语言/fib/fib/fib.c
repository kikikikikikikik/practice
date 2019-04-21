#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Fib(int n)//递归 ①终止条件 ②调用自己本身
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
//int FibOne(int n)//迭代
//{
//	int first = 1;
//	int second = 1;
//	int third = 1;
//	int i = 2;
//	while (i < n)
//	{
//		third = first + second;
//		first = second;
//		second = third;
//		i++;
//	}
//	return third;
//}
int main()
{
	int n = 0;
	int sum = 0;
	int result = 0;
	scanf("%d", &n);
	sum=Fib(n);
	//result = FibOne(n);
	printf("s=%d\n", sum);//递归的结果
	//printf("result=%d\n", result);//迭代的结果
	system("pause");
	return 0;
}