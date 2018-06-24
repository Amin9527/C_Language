#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
 int main()
{
	int number = 0,ret=0;
	printf("请输入一个数：");
	scanf("%d", &number);
	ret = overturn(number);
	printf("翻转后得到的数为：%u\n",ret);
	system("pause");
	return 0;
}
 int overturn(int x)
{
    int arr[32], i = 0,sum=0,t=0;
	printf("翻转后的二进制序列为：");
	for(i = 0; i < 32;i++)
	{
		arr[i] = x % 2;
		x = x >> 1;
		sum = sum + (arr[i])*pow(2, 31 - i);
		printf("%d", arr[i]);
	}
	printf("\n");
	return sum;
}