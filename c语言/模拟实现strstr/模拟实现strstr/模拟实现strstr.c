#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *arr = "hagsugahbwyegahcbew";
	char arr2[10], *p,*arr1;
	arr1 = arr2;
	printf("%s\n", arr);
	printf("��������Ҫ���ҵ��ַ�����");
	scanf("%s",arr2);
	flag:
	while (*arr1 != *arr)
	{
		arr++;
	}
	p = arr;
	while (*arr1 == *arr)
	{
		arr1++;
		arr++;
		if (*arr1 == '\0')
			printf("%s\n", p);
		if (*arr == '\0')
		{
			printf("NULL\n");
			system("pause");
			return 0;
		}
		

	}
	if (*arr1 != '\0')
	{
		arr1 = arr2;
		goto flag;
	}
	system("pause");
	return 0;
}