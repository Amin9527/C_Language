#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int main()
{
flags:;
	int i = 0,y=0,t=0,row=0,col=0,count=0;
	char arr[ROW][COL] = { 0 };
	srand((unsigned int)time(NULL));
	t =(int) rand % 3;
	switch (menu())
	{
		case 1:
			init(arr,row,col);
			print(arr, row, col);
			while (1)
			{
				player(arr, row, col);
				if (check(arr, row, col)==42)
				{
					printf("���Ӯ\n");
					break;
				}
				count++;
				if (ROW*COL == count)
				{
					printf("ƽ�֣�\n");
					break;
				}
				computer(arr, row, col);
				if (check(arr, row, col) == 48)
				{
					printf("����Ӯ��\n");
					break;
				}
				count++;
				if (ROW*COL == count)
				{
					printf("ƽ�֣�\n");
						break;
				}
			}
			goto flags;
		case 0:
		printf("�ټ����ڴ��´�������\n");
		break;
	}
	system("pause");
	return 0;
}

