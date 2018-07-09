#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0, j = 0,k=0,sum=1,count=0;
	printf("«Î ‰»Î£∫");
	scanf("%d", &i);
	for (j = 1; j <= i; j++)
	{
		sum = 1;
		for (k = 1; k <= j; k++)
		{
			sum = sum*k;
		}
		count = count + sum;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}