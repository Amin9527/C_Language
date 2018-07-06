#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define change(x) (((x%10)*10)+(x/10))
int main()
{
	int number = 0;
	printf("请输入一个数：");
	scanf("%d",&number);
	change(number);
	printf("%d\n",change(number));
	system("pause");
	return 0;
}