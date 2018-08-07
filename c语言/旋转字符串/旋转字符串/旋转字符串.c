#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

rotate(char arr[], int n, int m)
{
	char tmp;
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		tmp = arr[0];
		for (j = 0; j < m-1; j++)
		{
			arr[j]= arr[j+1];
		}
		arr[m - 1] = tmp;

	}
	
}
int main()
{
	char arr[] = "abcdef";
	int ret=strlen(arr);
	int k = 0;
	printf("原字符串：%s\n", arr);
	printf("请输入你要旋转的个数：");
	scanf("%d", &k);
	rotate(arr, k,ret);
	printf("旋转后：%s\n", arr);
	system("pause");
	return 0;
}