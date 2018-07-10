#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int average(int n, ...)
{
	va_list arg;
	int sum=0,i=0,avg=0;
	va_start(arg, n);
	for (i = 0; i < n; i ++ )
	{
		sum += va_arg(arg, int);
	}
	avg = sum / n;
	return avg;
}
int main()
{
	int avg=0;
	avg=average(4, 3, 6,11, 12);
	printf("平均值为：%d\n", avg);
	system("pause");
	return 0;
}