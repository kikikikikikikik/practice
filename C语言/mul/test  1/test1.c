#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
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
	printf("ÊäÈëÊý×Ö\n");
	scanf("%d", &n);
	mul(n);
	printf("\n");
	system("pause");
	return 0;
}