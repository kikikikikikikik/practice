#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//#include<assert.h>
//int my_strlen(const char *str)//i am a student ����
//{
//	int count = 0;
//	assert(str != null);//����ָ���ö���
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_str(char *left, char *right)
//{
//	assert(left != null);
//	assert(right != null);
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//void reverse(char *str)
//{
//	char *left = str;
//	char *right = str + my_strlen(str) - 1;
//	char *ret = str;
//	reverse_str(left, right);//���þ���
//	while (*ret != '\0')
//	{
//		char *start = ret;
//		while ((*ret != ' ') && (*ret != '\0'))//���õ���
//		{
//			ret++;
//		}
//		reverse_str(start, ret - 1);
//		if (*ret == ' ')
//		{
//			ret++;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	reverse(arr);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
//
//int main()//����(a+b)/2 ��ƽ����
//{
//	int a = 0;
//	int b = 0;
//	int ave = 0;
//	scanf("%d%d", &a, &b);
//	ave = (a&b) + ((a^b) >> 1);//a+b=(a&b)*2+(a^b)
//	printf("ave(%d %d)=%d\n", a, b, ave);
//	system("pause");
//	return 0;
//}
//#include<math.h>//�����ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ
//int reverse_bit(int x)
//{
//	int i = 0;
//	int ret = 0;//���㲢�ҽ����ŷ�ת���ֵ
//	for (i = 0; i < 32; i++)
//	{
//		ret <<= 1;
//		ret |= ((x >> i) & 1);
//	}
//	return ret;
//}
//int reverse_bit1(int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum += ((num >> i) & 1)*pow(2, 31 - i);
//	}
//	return sum;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	unsigned int result = reverse_bit1(x);
//	printf("%u", result);
//	system("pause");
//	return 0;
//}
//#define _crt_secure_no_warnings 1
//#include<stdio.h>
//#include<stdlib.h>
//int search(int arr[], int len)//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵ�
//{
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < len; i++)
//		temp ^= arr[i];
//	return temp;
//}
//int main()
//{
//	int arr[] = { 10, 2, 3, 3, 2 };
//	int len;
//	len = sizeof(arr) / sizeof(arr[0]);
//	int n = search(arr, len);
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}
int  Reseach_sou(int arr[][3], int row, int col, int key)
{
	int i = 0;
	int j = col - 1;	//�ӵ�һ��,���һ�п�ʼѰ��
	while ((j >= 0) && (i <= 2))
	{
		if (arr[i][j] == key)
			return 1;
		else if (arr[i][j] < key)
			i++;
		else
			j--;
	}
	return 0;
}
int main()
{
	int arr[][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	int key = 0;
	int row = 3;
	int col = 3;
	scanf("%d", &key);
	Reseach_sou(arr, row, col, key);
	//����ҵ�����true,�Ҳ�������false
	if (Reseach_sou(arr, row, col, key))
		return printf("�ҵ���!\n");
	else
		printf("û�ҵ�!\n");
	system("pause");
	return 0;
}
