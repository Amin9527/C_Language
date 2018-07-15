#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
my_memmove(char *p1, char *p2, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		*p1 = *p2;
		p1++; p2++;
	}
}
int main()
{
	char arr1[10] = "zhangmin", arr2[10] = "bite";
	int n = 0;
	printf("请输入你要拷贝的内存字节数：");
	scanf("%d", &n);
	my_memmove(arr1, arr2, n);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}