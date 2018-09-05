#define _CRT_SECURE_NO_WARNINGS 1
#include"head.h"

int menu()
{
	int i = 0;
	printf("****************************\n");
	printf("                            \n");
	printf("******    扫雷游戏    ******\n");
	printf("                            \n");
	printf("****************************\n");
	printf("**** 1.play   *  0.exit ****\n");
	printf("****************************\n");
	scanf("%d",&i);
	return i;
}
void init(char arr[ROW][COL],int row,int col)
{
	//memset(arr, '*', ROW*COL);
	row = 0, col = 0;
	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col <COL; col++)
		{
			arr[row][col] = '*';
		}
	}
}
void init_mine(int mine[ROW+2][COL+2], int row, int col)
{
	//memset(mine, 0, ROW*COL);
	for (row = 0; row < ROW+2; row++)
	{
		for (col = 0; col < COL+2; col++)
		{
			mine[row][col] = 0;
		}
	}
}
void print(char arr[ROW][COL],int row,int col)
{
	int i = 0;
	printf("   ");
	for (i = 1; i <=ROW; i++)
	{
		printf(" %d  ", i);
	}
	printf("\n");
	for (row = 0; row <ROW; row++)
	{
		if (row<9)
		printf("%d  ", row + 1);
		else
			printf("%d ", row + 1);
		for (col = 0; col < COL; col++)
		{
			printf(" %c |", arr[row][col]);
		}
		printf("\n   ");
		for (col = 0; col < COL; col++)
		{
			printf("___|");
		}
		printf("\n");
	}
	printf("\n");
}
void arrange(int mine[ROW+2][COL+2], int row, int col)
{
	int i = 0;
	for (i = 0; i < MINE; i++)
	{
		flag:
		row = rand() % 10;
		col = rand() % 10;
		if (mine[row+1][col+1] == 1)
			goto flag;
		mine[row+1][col+1] = 1;
	}
	for (row = 1; row < ROW+1; row++)
	{
		printf("\n");
		for (col = 1; col < COL+1; col++)
		{
			printf(" %d |", mine[row][col]);
		}
		printf("\n");
		for (col = 0; col < COL; col++)
		{
			printf("___|");
		}
	}
	printf("\n");
}
int game(char arr[ROW][COL],int mine[ROW+2][COL+2],int row,int col)
{
	while (1)
	{
		int sum = 0,x=0,y=0;
		printf("\n\n请输入你要排除的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (mine[x][y] != 1)
			{
				arr[x - 1][y - 1] = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
					+ mine[x][y - 1] + mine[x][y + 1]
					+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + 48;
				print(arr, row, col);
				sum++;
				printf("步数：%d步！\n", sum);
				if (sum == ROW*COL - MINE)
				{
					printf("恭喜你，排雷成功！\n");
					return 0;
				}
			}
			if (mine[x][y] == 1 && sum == 0)
			{
				printf("这是雷，请注意！");

			}
			else if (mine[x][y] == 1 && sum != 0)
			{
				printf("踩到雷了，你被炸死了！\n");
				return 0;
			}

		}
		else
			printf("请重新输入！\n\n");
	}
}
void expand(char arr[ROW][COL], int mine[ROW + 2][COL+2], int row, int col)
{
	if (mine[row][col] == 0)
	{
		if (mine[row - 1][col - 1] == 0)
		{
			arr[row - 2][col - 2] = '0';
		}
		if (mine[row - 1][col] == 0)
			arr[row - 2][col - 1] = '0';
		if (mine[row - 1][col + 1] == 0)
			arr[row - 2][col] = '0';
		if (mine[row][col + 1] == 0)
			arr[row-1][col] = '0';
		if (mine[row + 1][col + 1] == 0)
			arr[row][col] = '0';
		if (mine[row + 1][col] == 0)
			arr[row][col - 1] = '0';
		if (mine[row + 1][col - 1] == 0)
			arr[row][col - 2] = '0';
		if (mine[row][col - 1] == 0)
			arr[row - 1][col - 2] = '0';

	}
}