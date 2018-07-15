#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p = "askckjsefksfnwotiiwujnv",c;
	printf("字符串：%s\n", p);
	printf("请输入你要查找的字符：");
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