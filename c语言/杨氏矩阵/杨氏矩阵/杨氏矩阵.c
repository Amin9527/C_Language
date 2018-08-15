#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	int arr[4][4] = { { 1, 3, 7, 8 }, { 2, 4, 10, 13 }, { 5, 6, 11, 14}, {9,15,17,18} };
	int i = 0, j = 0,ret=0,m=0,n=3;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("请输入你要查找的数字：");
	scanf("%d", &ret);
	while (1)
	{
		if (ret>arr[m][n])
		{
			m++;
			if (m > 3)
			{
				printf("查无此数！");
				break;
			}
		}
		else if (ret < arr[m][n])
		{
			n--;
			if (n<0)
			{
				printf("查无此数！");
				break;
			}
		}
		else
		{
			printf("找到了！坐标为：%d，%d", m + 1, n + 1);
			break;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}