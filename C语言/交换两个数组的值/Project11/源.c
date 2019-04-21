#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  m, k, a[5] = { 1, 1, 1, 1, 1 }, b[5] = { 2, 2, 2, 2, 2 };
	for (k = 0; k < 5; k++)
	{
		a[k] = a[k] ^ b[k];
		b[k] = a[k] ^ b[k];
		a[k] = a[k] ^ b[k];
	}
	for (m = 0; m < 5; m++)
		printf("%d", a[m]);
	printf("\n");
	for (m = 0; m < 5; m++)
		printf("%d", b[m]);
	printf("\n");
	system("pause");
	return 0;
}