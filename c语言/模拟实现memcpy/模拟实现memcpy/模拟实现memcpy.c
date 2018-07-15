#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

my_memcpy(char *p1,char *p2,int n)
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
	char arr[10] = "zhangmin", arr1[10]="bite";
	int n = 0;
	printf("请输入你要拷贝的内存字节数：");
	scanf("%d", &n);
	memcpy(arr, arr1,n);
	printf("%s\n", arr1);
	printf("%s\n", arr);
	system("pause");
	return 0;
}