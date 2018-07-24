#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void print(int arr[9],int ret)
{
	int i=0,m=0,n=0,count=0,arr1[9];
	for (i = 0; i < ret; i++)
	{
		if (arr[i] % 2 == 1)
			count++;
	}
	printf("原数列为：");
	for (i = 0; i < ret; i++)
	{
		printf("%d ", arr[i]);

	}
	for (i = 0; i < ret; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr1[count+m] = arr[i];
			m++;
		}
		else if (arr[i] % 2 == 1)
		{
			arr1[n] = arr[i];
			n++;
		}
	}
	printf("\n奇在前偶在后为：");
	for (i = 0; i < ret; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

}
int main()
{
	int arr[] = {1,6,8,4,3,5,9,7,6},ret=0,i=0;
	ret = sizeof(arr) / sizeof(arr[0]);
	print(arr,ret);
	system("pause");
	return 0;
}