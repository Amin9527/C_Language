#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10] = { 1,6,2,1,4,3,4,5,3,2 };
	int i = 0, j = 0,k=0;
	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j])
				k++;
			if (k == 2)
				break;
		}
		if (k == 1)
			printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}