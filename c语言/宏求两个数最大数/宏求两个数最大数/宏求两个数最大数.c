#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAX(m,n) (((m)>(n))?(m):(n))
int main()
 {
	int x = 0, y = 0,z=0;
	printf("��������������");
	scanf("%d%d", &x, &y);
    z= MAX(x,y);
	printf("�ϴ���Ϊ��%d\n",z);
	system("pause");
	return 0;
 }