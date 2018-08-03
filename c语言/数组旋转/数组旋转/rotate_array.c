#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define N 4
void rotate(int arr[N][N], int a, int b, int c, int d)
{
	while (d > b)
	{
		int len = d - a;
		for (int i = 0; i < len; i++)
		{
			int t = arr[a][b + i];
			arr[a][b + i] = arr[c - i][b];
			arr[c - i][b] = arr[c][d - i];
			arr[c][d - i] = arr[a + i][d];
			arr[a + i][d] = t;
		}
		d--;
		c--;
		a++;
		b++;
	}

}
void print_arr(int arr[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%-3d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[N][N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	print_arr(arr);
	rotate(arr, N - N, N - N, N - 1, N - 1);
	printf("\n");
	print_arr(arr);
	system("pause");
	return 0;
}

