#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 6, 5, 5, 8, 9, 2, 7, 4, 3, 1 };
	int m = 0,n=0,tmp=0;
	for (m = 0; m < 9; m++)
	{
		for (n = 0; n < 9-m; n++)
		{
			if (arr[n]>arr[n + 1])
			{
				tmp = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = tmp;
			}
		}
	}
	for (m = 0; m < 10; m++)
	{
		printf("%d ", arr[m]);
	}
	system("pause");
	return 0;
}