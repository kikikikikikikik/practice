#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 999999; i++)
	{
		int sum = 0;
		int count = 0;
		int temp = i;
		while (temp != 0)
		{
			count++;
			temp /= 10;

		}
		temp = i;
		while (temp != 0)
		{
			sum += pow(temp % 10, count);
			temp = temp / 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	
	}
	system("pause");
	return 0;
}