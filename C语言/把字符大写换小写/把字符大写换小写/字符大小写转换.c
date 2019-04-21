#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
	//char ch ;
//	while (1)
//	{
//		printf("输入字符\n");
	//	scanf("%c", &ch);
	//	if (ch <= 90 && ch >= 65)
	//	{
		//	ch += 32;
	//	}
	//	else if (ch >= 97 && ch <= 122)
	//	{
	//		ch -= 32;
	//	}
	//	printf("%c\n", ch);
	//}
	//system("pause");
	//return 0;
//}
//getchar 的返回值为什么是int?

int main()
{
	int ch=0 ;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			putchar(ch- 32);
		}
		else if (ch <= 'Z'&&ch >= 'A')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0'&&ch <= '9')
		{
		}

	}
	system("pause");
	return 0;
}