#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d  ", i, j, i*j);
		}
	printf("\n");
}
	system("pause");
	return 0;
}