#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//����typedef�������ɱ�������Ϊ��������  typedef int A ,A�������� 
//typedef int (*pfun)[10];����ָ������
//typedef int (*pfun)(int ,int);����ָ������
//typedef define const����
void menu()
{
	printf("ѡ��1 ����Ϸ\n");
	printf("ѡ��2 �˳�\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//����[1-10]
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if(guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); 
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
		system("pause");
	return 0;
}
