#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int print(int i, int j, int k,int m)
{
	while (m != k)
	{
		int n = i + j;
		m++;
		i = j;
		j = n;
		print(i, j, k, m);
	}
	return j;
}
int main()
{
	int i = 1, j = 1,k=0,m=2,l=0;
	printf("��Ҫ��ѯ�ڼ���쳲���������\n");
	scanf("%d", &k);
	printf("��%d��",k);
	printf("쳲�������Ϊ��%d\n",print(i,j,k,m));
	system("pause");
	return 0;
}
