#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++)
	{
	for (b = 1; b <= 5; b++)
	{
	for (c = 1; c <= 5; c++)
	{
	for (d = 1;d <= 5; d++)
	{
	for (e = 1; e <= 5; e++)
		{
		if (((b == 2 && a != 3) || (b!=2 && a==3))==1)
		if (((b == 2 && e!= 4) || (b != 2 && e== 4))==1 )
		if (((c == 1 && d != 2) || (c!= 1 && d == 2))==1)
		if (((c== 5 && d!= 3) || (c!= 5 && d== 3))==1)
		if (((e == 4 && a != 1) || (e != 4 && a == 1))==1)
		if (a*b*c*d*e == 120)
			printf("%d%d%d%d%d\n", a, b, c, d, e);
		}
	
	}
	}
	}
	}
	system("pause");
	return 0;
}