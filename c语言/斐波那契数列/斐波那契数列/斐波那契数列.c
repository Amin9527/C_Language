#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>

#include<stdio.h>

int main()
{
flag:;
	int i = 1, j = 1, k = 0;
	printf("��������Ҫ��ѯ�ڼ���쳲���������");
	scanf("%d", &k);
	if (k == 1)
	{
		printf("��1��쳲�������Ϊ1��\n");
		system("pause");
		goto flag;
		return;
	}
	else if (k == 2)
	{
		printf("��2��쳲�������Ϊ1��\n");
		system("pause");
		goto flag;
		return;
	}
	int m = 0, l = 0;
	for (m = 2; m<k; m++)
	{
		l = i + j;
		i = j;
		j = l;
	}
	printf("��%d��쳲�������Ϊ%d��\n", k, l);
	system("pause");
	goto flag;
	return 0;
}
