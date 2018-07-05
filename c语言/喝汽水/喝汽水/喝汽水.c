#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int print(int n)
{
	if (n > 1)
		return n / 2 + print(n / 2);
	else
		return 0;
}
int main()
{
	int n = 0;
	printf("一瓶汽水1元钱，2个空瓶可以换1瓶汽水，请输入你有多少钱：");
	scanf("%d", &n);
	printf("你可以喝%d瓶饮料！\n", print(n) + n);
	system("pause");
	return 0;
}