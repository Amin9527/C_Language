#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define N 5
#define M 7
void Gui(int arr[N][M],int i,int j)
{
	if (i>=0 && i<N && j>=0 && j<M && arr[i][j]==1)
	{
		arr[i][j] = 2;
		Gui(arr, i - 1, j);
		Gui(arr, i, j - 1);
		Gui(arr, i, j + 1);
		Gui(arr, i + 1, j);
	}
}
int Mou_Sum(int arr[N][M])
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (arr[i][j] == 1)
			{
				Gui(arr, i, j);
				sum++;

			}
		}
	}
	return sum;
}

int main()
{
	int arr[N][M] = { 1,0,0,0,1,0,1,
	                1,1,0,1,1,0,1,
	                1,0,0,1,0,0,0,
	                0,0,1,1,0,1,1,
	                1,0,0,0,0,0,1,};
	printf("µºÓì¸öÊý£º%d\n",Mou_Sum(arr));
	system("pause");
	return 0;
}