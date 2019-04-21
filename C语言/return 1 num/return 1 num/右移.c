#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count_bit1(int x)
{
	int count = 0;
	int i = 0;
	while (i<sizeof(int)* 8)
	{
		if (x & (1 >> i))// &œ‡µ±≥À∑®
		{
			count++;
		}
		i++;
	}
	return count;
}