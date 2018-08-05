#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x=0,m=0;
	for (x = 'a'; x <= 'e'; x++)
	{
		if ((x != 'a')+(x == 'c')+(x == 'd')+(x != 'd')==3)
			printf("Ð×ÊÖÊÇ£º%c\n", x);
	}

	system("pause");
	return 0;
}