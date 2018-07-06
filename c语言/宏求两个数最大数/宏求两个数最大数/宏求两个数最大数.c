#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAX(m,n) (((m)>(n))?(m):(n))
int main()
 {
	int x = 0, y = 0,z=0;
	printf("请输入两个数：");
	scanf("%d%d", &x, &y);
    z= MAX(x,y);
	printf("较大数为：%d\n",z);
	system("pause");
	return 0;
 }