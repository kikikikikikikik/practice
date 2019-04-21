#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//左旋字符串中的k个字符
//void reverse(char *arr,int len,int k )
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		int temp = arr[0];
//		for (j = 0; j < len; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = temp;
//	}
//}
//int main()
//{
//	char arr[]="abcd";
//	int k;
//	int len = 0;
//	scanf("%d",&k);
//	len = strlen(arr);
//	reverse(arr, len,k);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
//判断一个字符串是否为另外一个字符串旋转之后的字符串。 
int reverse(char *arr, char *arr1, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int j = 0;
		int temp = arr[0];
		for (j = 0; j < len; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = temp;
		if (strcmp(arr,arr1)==0)
		{
			return 1;
		}
	}

	for (i = 0; i < len; i++)
	{
		int j = 0;
		int temp = arr[len];
		for (j = len; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
		if (strcmp(arr, arr1) == 0)
		{
			return 1;
		}
	}
}
int main()
{
	char arr[] = "abcd";
	char arr1[]=NULL;
	int k;
	scanf("%s", &arr1);
	k=strlen(arr);
	if(reverse(arr, arr1, k))
	  printf("1");
	else
		printf("0");
	system("pause");
	return 0;
}