#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Return_num( unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;// ÏòÓÒÒÆÒÆÒ»Î»  n=n>>1
	}
	return count;
}
