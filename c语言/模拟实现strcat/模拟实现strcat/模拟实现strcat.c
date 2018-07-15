#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void my_strcat(char arr[20], char arr1[])
{
	while(*arr!='\0')
	{
		arr++;
	}
	while (*arr1 != '\0')
	{
		*arr++ = *arr1++;

	}
}
int main()
{
	char arr[20] = "zhangmin ", arr1[] = "love bite";
	my_strcat(arr, arr1);
	printf("%s\n",arr);
	system("pause");
	return 0;
}