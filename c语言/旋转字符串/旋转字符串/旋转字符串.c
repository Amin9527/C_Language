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
	printf("ԭ�ַ�����%s\n", arr);
	printf("��������Ҫ��ת�ĸ�����");
	scanf("%d", &k);
	rotate(arr, k,ret);
	printf("��ת��%s\n", arr);
	system("pause");
	return 0;
}