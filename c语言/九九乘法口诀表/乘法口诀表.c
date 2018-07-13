#include<stdio.h>
int main()
{
	int i,j,k;
for(i=1;i<=9;i++)
{
	for(j=1;j<=i;j++)
	{
		k=j*i;
		printf("%d*%d=%-4d",j,i,k);//（%-4d）-代表输出结果左对齐，不加代表右对齐,4代表输出结果占4个位。
	}
	printf("\n");
}
}