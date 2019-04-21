#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
// 给定两个整形变量的值，将两个值的内容进行交换。 
//int change(int *px, int *py)
//{
//	int c = *px;
//	*px = *py;
//	*py = c;
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数字\n");
//	scanf("%d %d",&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	change(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
////不允许创建临时变量，交换两个数的内容
//int main()
//{
//	int a = 2;
//	int b = 3;
//	a = a^b;
//	b = b^a;
//	a = a^b;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = 3;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d,%d\n", a, b);
//	system("pause");
//	return 0;
//}
//求十个整数中的最大值
