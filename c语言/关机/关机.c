#include<stdio.h>
//#include<stdlib.h>
//#include"windows.h"
//#include<string.h>
int main()
{
	char input[100]={0};
	system("shutdown -s -t 60");
flag:
    printf("电脑将在一分钟后关机，如果输入：“取消关机”，将取消关机！\n");
	scanf("%s",input);
	if(strcmp(input,"取消关机")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto flag;
	}
	return 0;
}
