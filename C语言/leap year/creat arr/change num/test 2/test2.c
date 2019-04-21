#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int change(int *px, int *py)
{
	int c = *px;
	*px = *py;
	*py = c;
	return 1;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数字\n");
	scanf("%d %d",&a, &b);
	printf("a=%d,b=%d\n", a, b);
	change(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}