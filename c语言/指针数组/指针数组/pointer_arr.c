#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

/*����ָ���������Ƿ����ĳ���ַ�*/

int find_char(char** arr,char ch)
{
	while (*arr != NULL)//ָ��ָ������ĵ�һ��Ԫ�ء�hello��
	{
		while (**arr != '\0')
		{
			if (*(*arr)++ == ch)//*arr�ĵ�ַΪ��h��Ԫ�صĵ�ַ��arr�ĵ�ַΪ��hello���ĵ�ַ��
				               //��*arr��+1Ϊ��e���ĵ�ַ��arr+1Ϊ��world���ĵ�ַ����**arr��+1Ϊh+1=i��104+1=105��
				return 1;//���ڷ���1
		}
		arr++;
	}
	return 0;//�����ڷ���0
}
int main()
{
	char* array[] = { "hello", "world", "zhangmin", "gaoxing", "bitekeji" ,NULL};//����һ����NULL��β��ָ������
	char** arr = array;
	char ch = 'c';
	int n = find_char(arr, ch);
	printf("%d\n", n);
	system("pause");
	return 0;
}
