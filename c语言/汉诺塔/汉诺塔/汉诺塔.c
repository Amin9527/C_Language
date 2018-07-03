#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>

void hanoi(int n, char A, char B, char C) 
{
	if (n == 1)
	{
		printf("Move sheet %d from %c to %c\n", n, A, C);

	}

	else
	     {

		hanoi(n - 1, A, C, B);
		printf("Move sheet %d from %c to %c\n", n, A, C); 
		hanoi(n - 1, B, A, C);
	     }

}

int main()
{
	int n;
	printf("«Î ‰»Î≈Ã ˝£∫");
	scanf("%d", &n); 
	hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;

}
