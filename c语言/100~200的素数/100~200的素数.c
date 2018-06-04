#include<stdio.h>
int main()
{
	int i,j,sum=0;
	for(i=100;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}

     	if(j==i)
		{
	    sum++;
		printf("%d ",j);
		}

	}
	printf("\n");
	 printf("sum=%d\n",sum);

}
