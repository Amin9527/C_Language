#include<stdio.h>
//#include<stdlib.h>
//#include"windows.h"
//#include<string.h>
int main()
{
	char input[100]={0};
	system("shutdown -s -t 60");
flag:
    printf("���Խ���һ���Ӻ�ػ���������룺��ȡ���ػ�������ȡ���ػ���\n");
	scanf("%s",input);
	if(strcmp(input,"ȡ���ػ�")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto flag;
	}
	return 0;
}
