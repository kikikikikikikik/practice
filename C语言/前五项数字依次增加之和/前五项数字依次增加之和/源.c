#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
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