#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int Max(int n, ...)
{
	va_list first;
	int i=0,ret=0,ret1=0;
	va_start(first, n);
	ret=va_arg(first, int);
	for (i = 1; i < n; i++)
	{
		ret1 = va_arg(first, int);

		if (ret>ret1)
			ret = ret;
		else
			ret = ret1;
	}
	va_end (first);
	return ret;
}
int main()
{
	int max;
	max=Max(5, 2, 1, 16, 10, 7);
	printf("最大值为%d\n", max);
	system("pause");
	return 0;
}