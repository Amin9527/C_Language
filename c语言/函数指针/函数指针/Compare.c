#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
#define Get_Max 1
#define Get_Min 0

//����get_min����������������Сֵ
int get_min(int x,int y)
{
	return x > y ? y : x;
}

//����get_max()�������������ֵ
int get_max(int x, int y)
{
	return x > y ? x : y;
}


int Compare(int x,int y,int flag)
{
	int ret = 0;
	int (*p)(int, int);
	if (flag == Get_Max)
		p = get_max;
	else
		p = get_min;
	ret = p(x, y);
	return ret;
}

int main()
{
	int ret = Compare(11, 9, Get_Max);
	printf("���ֵΪ%d\n", ret);
	ret = Compare(11, 9, Get_Min);
	printf("��СֵΪ%d\n", ret);
	system("pause");
	return 0;
}
*/
void Compare(char* s1, char* s2, int (*Com)(const char* s1, const char* s2));
int main()
{
	printf("Plase enter two strings!\n");
	char s1[20], s2[20];
	scanf("%s", s1);
	scanf("%s", s2);
	int(*p)(const char*, const char*);
	p = strcmp;
	Compare(s1, s2, p);
	system("pause");
	return 0;
}
void Compare(const char* s1, const char* s2, int(*Com)(const char* s1, const char* s2))
{
//(*Com)ͨ��ָ����ú�����Comͨ�����������ú���
	if ((*Com)(s1, s2) == 0)//Ҳ����Com��s1,s2��== 0
		printf("Equal!\n");
	else
		printf("Not Equal!\n");
}