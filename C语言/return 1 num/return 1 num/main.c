#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
Return_num(unsigned int n);
count_bit1(int x);
count_bit2(int x);
int main()
{
	int n = 0;
	int result1 = 0;
	int result = 0;
	int s;
	scanf("%d", &n);
	s = count_bit1(n);
	result1 = Return_num(n);
	printf("%d\n", s);
	result = count_bit2(n);
	printf("%d\n", result);
	system("pause");
	return 0;
}