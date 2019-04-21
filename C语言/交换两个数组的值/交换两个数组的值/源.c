#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void show(int arr[10],  int len)
{
	int i = 0; 
	for (i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int i = 0; 
	show(arr1, 10);
	show(arr2, 10);
	show(arr1, 10);
	show(arr2, 10);
	system("pause");
	return 0;
}