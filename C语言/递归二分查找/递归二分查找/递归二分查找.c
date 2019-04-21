#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[], int k, int left, int right)
{

		int mid = left + (right - left) / 2;
		if (k < arr[mid])
			right = mid - 1;
		else if (k>arr[mid])
			left = mid + 1;
		if (left<=right)
		 binary_search( arr,   k, left, right);
		return mid;
	
	if (left > right)
		return -1;
}
int main()
{
	int left = 0;
	int right = 0;
	int ret = 0;
	int k = 7;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	right = sizeof(arr) / sizeof(arr[0]) - 1;//arr在哪里定义就在那里使用这个公式求长度
	ret = binary_search(arr, k, left, right);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("所找数字下标是:%d\n", ret);
	}
	system("pause");
	return 0;
}