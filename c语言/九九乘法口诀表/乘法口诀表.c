#include<stdio.h>
int main()
{
	int i,j,k;
for(i=1;i<=9;i++)
{
	for(j=1;j<=i;j++)
	{
		k=j*i;
		printf("%d*%d=%-4d",j,i,k);//��%-4d��-��������������룬���Ӵ����Ҷ���,4����������ռ4��λ��
	}
	printf("\n");
}
}