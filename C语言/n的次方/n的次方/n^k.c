#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int MyPow(int n, int k)
{
	if (k == 0)
		return n;
	else
	return  n*= MyPow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	int result = 0;
	scanf("%d%d", &n, &k);
	result=MyPow(n, k);
	printf("%d\n", result);
	system("pause");
	return 0;
}