#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int my_strncmp(char *arr, char *arr1, int n)
{
	int i = 0;
	while (i != n)
	{
		if (*arr == *arr1)
		{
			arr++; arr1++;
		}
		else if (*arr > *arr1)
		{
			return 1;
		}
		else
			return -1;
		i++;
	}
	return 0;
}
int main()
{
	char arr[10] = "abcdefgk", arr1[10] = "abcdefgz";
	int n = 0;
	printf("arr =%s\narr1=%s\n", arr, arr1);
	printf("请输入你要比较的字节数：");
	scanf("%d", &n);
	printf("%d\n",my_strncmp(arr, arr1,n));
	system("pause");
	return 0;
}