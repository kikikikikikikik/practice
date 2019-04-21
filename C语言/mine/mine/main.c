#define _CRT_SECURE_NO_WARNINGS 1
#include "mine.h"
int main()
{
	int select = 0;
	int quit = 0;
	while (!quit)
	{
		Menu();
		scanf("%d", &select);
		switch (select)
		{
		case 1:Game();
			break;
		case 2:printf("I Am Quit!\n");
			break;
		default:printf("Select Error,Try Again!\n");
			break;
		}
	}
	system("pause");
	return 0;
}