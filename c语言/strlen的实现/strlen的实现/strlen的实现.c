#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int my_strlen(char *p)
{
	int n = 0;
	while (*p != '\0')
	{
		n++;
		p++;
	}
	return n;
}
int main()
{
	char *p = "i love bite";
	printf("%s\n", p);
	printf("该字符串的长度为：%d\n", my_strlen(p));
	system("pause");
	return 0;
}