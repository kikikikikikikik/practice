#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int differnum(int m, int n)
{
	int i = 0;
	int count = 0;
	i = m^n;
	while (i)
	{
		count++;
		i &= (i - 1);
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	int result = 0;
	scanf("%d%d", &m, &n);
	result = differnum(m, n);
	printf("%d", result);
	system("pause");
	return 0;
}