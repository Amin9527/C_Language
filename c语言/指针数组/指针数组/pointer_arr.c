#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

/*查找指针数组中是否存在某个字符*/

int find_char(char** arr,char ch)
{
	while (*arr != NULL)//指向指针数组的第一个元素“hello”
	{
		while (**arr != '\0')
		{
			if (*(*arr)++ == ch)//*arr的地址为‘h’元素的地址，arr的地址为“hello”的地址，
				               //（*arr）+1为‘e’的地址，arr+1为“world”的地址，（**arr）+1为h+1=i（104+1=105）
				return 1;//存在返回1
		}
		arr++;
	}
	return 0;//不存在返回0
}
int main()
{
	char* array[] = { "hello", "world", "zhangmin", "gaoxing", "bitekeji" ,NULL};//创建一个以NULL结尾的指针数组
	char** arr = array;
	char ch = 'c';
	int n = find_char(arr, ch);
	printf("%d\n", n);
	system("pause");
	return 0;
}
