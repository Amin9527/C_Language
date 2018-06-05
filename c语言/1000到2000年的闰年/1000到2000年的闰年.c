#include<stdio.h>
int main()
{
	int year,sum=0;
	for(year=1000;year<=2000;year++)
	{
		if(year%4 ==0)
		{
			if(year%100 !=0)
			{
				sum++;
				printf("%d  ",year);
			}

		}
		if(year%400==0)
			{
			    sum++;
				printf("%d  ",year);
			}
	}
	printf("\n");
	printf("sum=%d\n",sum);
	return 0;
}
/*#include<stdio.h>
int main()
{
	int year=1000,z;
	for(year=1000;year<=2000;year++)
	{
		if(year%4==0)
		{
			if(year%100 !=0)
			{
				//z++;
				printf("%d  ",year);
			}
		}
		if(year%400==0)
		{
			//z++;
			printf("%d",year);
		}
		//printf("z=%d",z);
	}
	return 0;
}*/
