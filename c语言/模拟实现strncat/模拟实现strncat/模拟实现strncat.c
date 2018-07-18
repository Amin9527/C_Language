#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void my_strncat(char *arr, char *arr1, int n)
{
	int i = 0;
	while (*arr != '\0')
	{
		arr++;
	}
	for (i = 0; i < n; i++)
	{
		*arr = *arr1;
		arr++; arr1++;
	}
}
int main()
{
	char arr[20] = "zhang min ", arr1[20] = "love bite";
	int n = 0;
	printf("请输入你要追加的字节数：");
	scanf("%d", &n);
	my_strncat(arr, arr1, n);
	printf("%s\n", arr);
	system("pause");
	return 0;
}