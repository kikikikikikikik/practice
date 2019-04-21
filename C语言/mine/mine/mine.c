#define _CRT_SECURE_NO_WARNINGS 1
#include"mine.h"
void Menu()
{
	printf("######################\n");
	printf("##1.Play      2.Exit##\n");
	printf("######################\n");
	printf("Please Select:>\n");
}
static int GetIndex(int start, int end)
{
	return rand() % (end - start + 1) + start;
}
void SetMine(char mine_board[][COL], int row, int col)
{
	srand((unsigned long)time(NULL));
	int mine_num = MINES;
	while (mine_num)
	{
		int i_index = GetIndex(1, col - 2);
		int j_index = GetIndex(1, col - 2);
		if (mine_board[i_index][j_index] == '0')
		{
			mine_board[i_index][j_index] = '1';
			mine_num--;
		}
	}
}
int GetMineNum(char mine_board[][COL], int i, int j)
{
	return mine_board[i - 1][j - 1] + mine_board[i - 1][j] + mine_board[i - 1][j + 1] + mine_board[i][j - 1] + mine_board[i][j + 1] +
		 + mine_board[i + 1][j - 1] + mine_board[i + 1][j] + mine_board[i + 1][j + 1]-8*'0';
}
void ShowBoard(char show_board[][COL], int row, int col)
{
	int i = 1;
	int j = 1;
	printf(" ");
	for (; i <= col - 2; i++)
	{
		printf("%d   ",i);
	}
	printf("\n");
	for (i = 1; i <= col-1; i++)
	{
		printf("----");
	}
	printf("\n");
	for (i = 1; i <= row - 2; i++)
	{
		printf("%2d|", i);
		for (j = 1; j <= col - 2; j++)
		{
			printf("%c|", show_board[i][j]);
		}
		printf("\n");
		int k = 1;
		for (k = 1; k <= col - 1; k++)
		{
			printf("----");
		}
		printf("\n");
	}
}
void PlayGame(char show_board[][COL], char mine_board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int total = (ROW - 2)*(COL - 2);
	while (1)
	{
		ShowBoard(show_board, row, col);
		printf("Please Enter Pos<x,y>:");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row - 2 && j >= 1 && j <= col - 2)
		{
			if (mine_board[i][j] == '0')
			{
				int num = GetMineNum(mine_board, i, j);
				show_board[i][j] = num + '0';
				total--;
			}
			else {
				ShowBoard(mine_board, row, col);
				printf("Game Over!You Lose:(\n");
				break;
			}
		}
		else {
			printf("Enter Error,Try Again!\n");
			continue;
		}
		if (total == MINES)
		{
			printf("You Win:)\n");
			break;
		}
	}
}
void Game()
{
	char showboard[ROW][COL];
	char mine_board[ROW][COL];
	memset(showboard, '*', sizeof(showboard));
	memset(mine_board, 'O', sizeof(showboard));
	SetMine(mine_board, ROW, COL);
	PlayGame(showboard, mine_board, ROW, COL);
}