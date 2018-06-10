#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
		float x=0,y=0,z = 0;
	printf("请输入两个数：");
	scanf("%f%f", &x, &y);
	z = (x-y)/2+y;
	printf("平均值为：%f\n",z);
	system("pause");
	return 0;
}