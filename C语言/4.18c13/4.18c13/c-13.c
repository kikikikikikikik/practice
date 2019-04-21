#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//调整数组使奇数全部都位于偶数前面。
//void swap(int *arr)
//{
//	int i = 0;
//	int j = 0;
//	int k=5;
//	int arr2[10] ;
//	for (i = 0; i < 10; i++)
//	{
//		if ((arr[i]) % 2 == 1)
//		{
//			arr2[j] = (arr[i]);
//			j++;
//		}
//		else
//		{
//			arr2[k] = (arr[i]);
//			k++;
//		}
//	}
//	for (k = 0; k < 10; k++)
//	{
//		printf("%d ", arr2[k]);
//	}
//}
//int main()
//{
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	swap(arr);
//	system("pause");
//	return 0;
//}
int search(int arr[3][3], int key)
{
	int i = 0;
	int j = 2;
	while ((j >= 0) && (i < 3))
	{
		if (arr[i][j] == key)
		{
		return 1;
		}
		else if (arr[i][j]>key)
			j--;
		else i++;
	}
}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	int key;
	scanf("%d",&key);
	//search(arr, key);
	if (search( arr[3][3],  key)==1)
	{
		printf("找到了\n");
	}
	else printf("没找到\n");
	system("pause");
	return 0;
}