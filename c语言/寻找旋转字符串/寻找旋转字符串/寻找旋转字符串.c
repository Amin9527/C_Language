#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

rotate(char arr[15], char arr1[15])
{
	int ret=strlen(arr),ret1=strlen(arr1);
	int i = 0, j = 0,k=0;
	char tmp = arr[ret];
	for (i = 0; i <= ret; i++)
	{
		arr[ret + i] = arr[i];
	}
	arr[ret + ret] = tmp;
	char *p = arr, *p1 = arr1,*p2=NULL;
	while (*p1 != '\0' && *p!='\0')
	{
		if (*p1 == *p)
		{
			if (k==0)
			p2 = p1;
			p1++;
			p++;
			k++;
		}
		else
		{
			if (p2 != NULL)
			{
			  p1 = p2;
			  p=p-k+1;
			  k = 0;
			}
			else
			p++;
		}
	}
	if (*p1 == '\0' && k == ret1)
		printf("是旋转体！\n");
	else
		printf("不是旋转体！\n");
}
int main()
{
	char arr[15] = "abcdef",arr1[15];
	printf("原字符串为；%s\n", arr);
	printf("请输入你的字符串：");
	scanf("%s", arr1);
	rotate(arr, arr1);
	system("pause");
	return 0;
}