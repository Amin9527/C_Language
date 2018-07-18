#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void my_strcpy(char arr1[15], char arr[15])
{
	int n = 0;
	while(arr[n] != '\0')
	{
		arr1[n] = arr[n];
		n++;
	}
}
int main()
{
	char arr[] = "i love bite",arr1[15]="\0";
	my_strcpy(arr1, arr);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}