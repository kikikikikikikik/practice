#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int reverse_bit( int x)
{
	int i = 0;
	 int ret=0;//置零并且将其存放翻转后的值
	for (i = 0; i < 32; i++)
	{
		ret <<= 1;
		ret |= ((x >> i) & 1);
	}
	return ret;
}
int reverse_bit1(int num)
{
	int i = 0;
	unsigned int sum = 0;
	for (i = 0; i < 32; i++)
	{
		sum+=((num >> i) & 1)*pow(2,31-i);
	}
	return sum;
}
int main()
{
	int x = 0;
	scanf("%d", &x);
	unsigned int result = reverse_bit1(x);
	printf("%u", result);
	system("pause");
	return 0;
}