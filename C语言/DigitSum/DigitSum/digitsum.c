#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int DigitSum(x)
{
	if (x < 10)
	{
		return x;
	} 
	return (x % 10) + DigitSum(x / 10);//��ִ�г��� ִ����֮�� �ٷ���ֵ
}
int main()
{
	int x = 0; 
	int result = 0;
	scanf("%d", &x);
	result = DigitSum(x);
	printf("%d", result);
	system("pause");
	return 0;
}