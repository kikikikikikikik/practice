#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Prime(int i)
{
	int j = 0;
	for (j = 2; j < sqrt(i); j++)
	{
		if (i%j == 0)
		{
			return 0;
		}
		if (j >= sqrt(i))
	{
			return 1;
	}
}
int main()
{
	int j;
	int i = 0;
	for (i = 100; i < 200; i+=2)
	{
		if (Prime(i))
		{
			printf("%d\n", i);
		}
    }
	system("pause");
	return 0;
}