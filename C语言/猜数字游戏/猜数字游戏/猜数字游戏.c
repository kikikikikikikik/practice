#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//加上typedef变量会由变量提升为这种类型  typedef int A ,A代表整形 
//typedef int (*pfun)[10];数组指针类型
//typedef int (*pfun)(int ,int);函数指针类型
//typedef define const区别
void menu()
{
	printf("选择1 玩游戏\n");
	printf("选择2 退出\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//产生[1-10]
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if(guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); 
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
		system("pause");
	return 0;
}
