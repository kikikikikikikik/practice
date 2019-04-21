#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int Mystrlen(const char *str)//递归实现
{
	int count;
	if (*str == '\0')                          
	{                                              
		return 0 ;                                    
	}
	else count=1 + Mystrlen(str + 1);
    return count;
}
//int strlen1(char *str)//非递归实现
//{
//char i = 0;
//int count = 0;
//	for (i = 0; str[i] != '\0';i++)
//	{
//		count++;
//	}
//	return count;
//}
int main()
{
	//const char *str = "abcdefgh1234";
	char str[20];
	scanf("%s", &str);
	int len = Mystrlen(str);//int len=strlen(str)
	//int len2 = strlen1(str);
	printf("len=%d\n", len);
	//printf("len2=%d\n", len2);
	system("pause");
	return 0;
}