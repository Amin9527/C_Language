#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int print(int n)
{
	if (n > 1)
		return n / 2 + print(n / 2);
	else
		return 0;
}
int main()
{
	int n = 0;
	printf("һƿ��ˮ1ԪǮ��2����ƿ���Ի�1ƿ��ˮ�����������ж���Ǯ��");
	scanf("%d", &n);
	printf("����Ժ�%dƿ���ϣ�\n", print(n) + n);
	system("pause");
	return 0;
}