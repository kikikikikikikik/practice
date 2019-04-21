#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count_bit2(int x)
{
	int count = 0;
	while (x)
	{
		x = x&(x - 1);//每次&完少一个1
		count++;
	}
	return count;
}