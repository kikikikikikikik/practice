#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	int i = 0;
	int temp;
	scanf("%d", &num);
	printf("����λΪ��");
	for (i = 31; i > 0; i = i - 2)
	{
		temp = (num >> i) & 1;
		printf("%d", temp);
	}
	printf("\n");
	printf("ż��λΪ��");
	for (i = 32; i > 0; i = i - 2)
	{
		temp = (num >> i) & 1;
		printf("%d", temp);
	}
	printf("\n");
	system("pause");
	return 0;
}
