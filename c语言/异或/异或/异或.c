#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 3, b = 7;
	//a=    0011
	//b=    0111
	//a=a^b=0100
	//b=a^b=0011
	//a=a^b=0111
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d", a, b);
	system("pause");
	return 0;
}