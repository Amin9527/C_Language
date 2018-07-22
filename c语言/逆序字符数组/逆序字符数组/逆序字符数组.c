#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	char arr[4][10] = { "i","am","a","student" };
	for (i = 0; i <=3; i++)
	{
		printf("%s ", arr[i]);
	}printf("\n");

	for (i = 3; i >= 0; i--)
	{
		printf("%s ", arr[i]);
	}printf("\n");
	system("pause");
	return 0;
}