#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int print(int n)
{
	if (n > 0)
		return n*print(n-1);
	else
		return 1;
}
int main()
{
	int n = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	printf("这个数的阶乘为：%d\n",print(n));
	system("pause");
	return 0;
}