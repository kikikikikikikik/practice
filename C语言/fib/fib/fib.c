#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Fib(int n)//�ݹ� ����ֹ���� �ڵ����Լ�����
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
//int FibOne(int n)//����
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
	printf("s=%d\n", sum);//�ݹ�Ľ��
	//printf("result=%d\n", result);//�����Ľ��
	system("pause");
	return 0;
}