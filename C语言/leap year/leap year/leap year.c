#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int leap (int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year=0;
	for (year = 0; year < 2000; year++)
	{
		if (leap(year))
			printf("%d is leap year\n", year);
	}
	system("pause");
	return 0;
}