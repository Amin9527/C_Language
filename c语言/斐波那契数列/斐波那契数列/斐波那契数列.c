#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>

#include<stdio.h>

int main()
{
flag:;
	int i = 1, j = 1, k = 0;
	printf("请输入你要查询第几个斐波那契数：");
	scanf("%d", &k);
	if (k == 1)
	{
		printf("第1个斐波那契数为1！\n");
		system("pause");
		goto flag;
		return;
	}
	else if (k == 2)
	{
		printf("第2个斐波那契数为1！\n");
		system("pause");
		goto flag;
		return;
	}
	int m = 0, l = 0;
	for (m = 2; m<k; m++)
	{
		l = i + j;
		i = j;
		j = l;
	}
	printf("第%d个斐波那契数为%d！\n", k, l);
	system("pause");
	goto flag;
	return 0;
}
