#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[13],i=0,n=0,arr1[13];
	srand((unsigned int)time(NULL));
	for (i = 0; i < 13; i=i+2)
	{
		flag:
		arr[i] = rand()%100;
		for (n = 0; n < i; n++)
		{
			if (arr[n] == arr[i])
				goto flag;
		}
		if (i<12)
		arr[i + 1] = arr[i];
	}
	for (i = 0; i < 13; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 13; i++)
	{
		for (n = 0; n < 13; n++)
		{
			if ((arr[i] ^ arr[n]) != 0)
				continue;
			else if ((arr[i] ^ arr[n]) == 0 && n!=i)
				break;
			if (n==12)
				printf("¹ÂÁ¢ÊýÎª:%d\n", arr[i]);
		}
	}
	system("pause");
	return 0;
}