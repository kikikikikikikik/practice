#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}