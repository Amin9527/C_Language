#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p = "askckjsefksfnwotiiwujnv",c;
	printf("�ַ�����%s\n", p);
	printf("��������Ҫ���ҵ��ַ���");
	scanf("%c", &c);
	while (*p != c)
	{
		p++;
		if (*p == '\0')
		{
			printf("NULL\n");
			break;
		}
	}
	if (*p == c)
		printf("%s\n", p);
	system("pause");
	return 0;
}