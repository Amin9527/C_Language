#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int rcsion(char *p)
{
	if (*p != '\0')
	{
		return rcsion(p+1) + 1;
	}
	else
		return 0;
}
int main()
{
	char *p = "i love bite";
	printf("%s\n", p);
	printf("���ַ����ĳ���Ϊ��%d\n", rcsion(p));
	system("pause");
	return 0;
}