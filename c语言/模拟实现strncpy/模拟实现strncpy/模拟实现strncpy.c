#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void my_strncpy(char *arr,char *arr1,int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		*arr = *arr1;
		arr++; arr1++;
	}
}

int main()
{
	char arr[15] = "0", arr1[14] = "zhangmin bite";
	int n = 0;
	printf("%s\n", arr1);
	printf("请输入你要拷贝的字节数：");
	scanf("%d", &n);
	my_strncpy(arr, arr1, n);
	printf("%s\n", arr);
	system("pause");
	return 0;
}