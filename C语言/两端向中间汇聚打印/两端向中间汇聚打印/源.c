#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[] = "welcome  to  bit!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//×Ö·û´®ºóÃæÓÐ\0£»
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	system("pause");
	return 0;
}