#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
		printf("%d ", n % 10);
	}
	else
		printf("%d ", n);
}
int main()
{
	int n = 0;
	printf("请输入一个整数：");
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}