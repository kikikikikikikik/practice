#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count_bit2(int x)
{
	int count = 0;
	while (x)
	{
		x = x&(x - 1);//ÿ��&����һ��1
		count++;
	}
	return count;
}