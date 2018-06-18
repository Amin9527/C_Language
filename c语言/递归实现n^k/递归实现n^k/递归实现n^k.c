#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int index(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else 
		return n*index(n, k - 1);
}
int main()
{
	int n = 0, k = 0;
	printf("请输入指数：");
	scanf("%d", &k);
	printf("请输入底数：");
	scanf("%d", &n);
	printf("%d\n",index(n, k));
	system("pause");
	return 0;
}