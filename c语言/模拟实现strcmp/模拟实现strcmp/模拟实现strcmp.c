#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char arr1[10]="0", arr2[10]="0" ;
	int z = 0,i=0;
	printf("ÇëÊäÈë×Ö·û´®arr1£º");
	scanf("%s", arr1);
	printf("ÇëÊäÈë×Ö·û´®arr2£º");
	scanf("%s", arr2);
	z = strlen(arr1) > strlen(arr2) ? strlen(arr1) : strlen(arr2);
	for (i = 0; i < z+1; i++)
	{
		if (arr1[i]>arr2[i])
		{
			printf("1\n");
			break;
		}
		else if (arr1[i]<arr2[i])
		{
			printf("-1\n");
			break;
		}
		else if(arr1[i] ==arr2[i] && arr1[i] == '\0')
		{
			printf("0\n");
			break;
		}
	}
	system("pause");
	return 0;

}