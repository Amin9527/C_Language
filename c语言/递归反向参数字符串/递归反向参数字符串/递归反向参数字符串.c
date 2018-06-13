#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

char rcsion(char *p)
{
	if (*p != '\0')
	{
		rcsion(p+1);
		printf("%c", *p);
	}
}
int main()
{
	char *p = "etib evol i";
	rcsion(p);
	printf("\n");
	system("pause");
	return 0;
}