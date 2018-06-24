#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0,j=0;
	printf("请输入一个数：");
	scanf("%d", &i);
	j=(((i & 0x55555555)<<1)+((i & 0xaaaaaaaa)>>1));
	printf("%d\n", j);
	system("pause");
	return 0;
}