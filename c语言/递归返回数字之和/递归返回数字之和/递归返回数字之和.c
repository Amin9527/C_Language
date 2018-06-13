#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int rcsion(int m)
{
	if (m > 9)
	{
		return m % 10 + rcsion(m / 10);
	}
	else
		return m;
}
int main()
{
	int i = 0;
	printf("请输入一个非负整数：");
	scanf("%d", &i);
	printf("%d\n",rcsion(i));
	system("pause");
	return 0;
}