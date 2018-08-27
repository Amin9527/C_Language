#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int menu()
{
	int j = 0;
	printf("*********  三子棋  *********\n");
	printf("****************************\n");
	printf("****************************\n");
	printf("** 1.开始游戏  0.退出游戏 **\n");
	printf("****************************\n");
	scanf("%d", &j);
	return j;
}
void init(char arr[ROW][COL], int row, int col)
{
	memset(arr, ' ', ROW*COL);
}
void print(char arr[ROW][COL],int row,int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);
		if (i < ROW - 1)
		{
			printf("---|---|---\n");
		}
	}
}
void player(char arr[ROW][COL],int row,int col)
{
		printf("玩家走，请输入坐标：");
		flag:
		scanf("%d%d", &row, &col);
		if (row >= 1 && row<= 3 && col >= 1 && col <= 3)
		{
			if (arr[row-1][col-1] != '*' && arr[row-1][col-1]!='0')
			{
				arr[row-1][col-1] = '*';
			}
			else
			{
				printf("该位置已被占用！\n");
				goto flag;
			}
		}
		else
		{
			printf("输入错误！\n");
			goto flag;
		}
		print(arr, row, col);
}
void computer(char arr[ROW][COL],int row,int col)
{
	printf("电脑走：\n");
	Sleep(1200);
	row = rand() % 3;
	col = rand() % 3;
	while (1)
	{
		if (arr[row][col] != '*' && arr[row][col] != '0')
		{
			arr[row][col] = '0';
			break;
		}
		else
		{
			row = rand() % 3;
			col = rand() % 3;
		}
	}
	print(arr, row, col);
}
int check(char arr[ROW][COL], int row, int col)
{
	if (arr[row][col] == arr[row][col + 1] && arr[row][col] == arr[row][col + 2] && arr[row][col] != ' ')
		return arr[row][col];
	else if (arr[row + 1][col] == arr[row + 1][col + 1] && arr[row + 1][col] == arr[row + 1][col + 2] && arr[row+1][col] != ' ')
		return arr[row+1][col];
	else if (arr[row + 2][col] == arr[row + 2][col + 1] && arr[row + 2][col] == arr[row + 2][col + 2] && arr[row+2][col] != ' ')
		return arr[row+2][col];
	else if (arr[row][col] == arr[row + 1][col] && arr[row + 1][col] == arr[row + 2][col] && arr[row][col] != ' ')
		return arr[row][col];
	else if (arr[row][col + 1] == arr[row + 1][col + 1] && arr[row][col + 1] == arr[row + 2][col + 1] && arr[row][col+1] != ' ')
		return arr[row][col+1];
	else if (arr[row][col + 2] == arr[row + 1][col + 2] && arr[row][col + 2] == arr[row + 2][col + 2] && arr[row][col+2] != ' ')
		return arr[row][col+2];
	else if (arr[row][col] == arr[row + 1][col + 1] && arr[row][col] == arr[row + 2][col + 2] && arr[row][col] != ' ')
		return arr[row][col];
	else if (arr[row][col + 2] == arr[row + 1][col + 1] && arr[row][col + 2] == arr[row + 2][col] && arr[row][col+2] != ' ')
		return arr[row][col+2];
	return 2;
}