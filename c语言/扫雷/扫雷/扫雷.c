#define _CRT_SECURE_NO_WARNINGS 1
#include"head.h"
int main()
{
	char arr[ROW][COL];
	int row = 0, col = 0,x=0,y=0,sum=0,mine[ROW+2][COL+2];
	srand((unsigned int) time(NULL));
	
	flag:
	switch (menu())
	{
	case 0:
		printf("��ӭ�´�������ˣ��\n"); break;
	case 1:
	{
			  sum = 0;
			  init(arr, row, col);
			  init_mine(mine, row, col);
			  print(arr, row, col);
			  arrange(mine,row,col);
			  //game(mine, arr, row, col);
				//goto flag;
			 while (1)
			  {
				  printf("\n\n��������Ҫ�ų������꣺");
				  scanf("%d%d", &x, &y);
				  if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
				  {
					  if (mine[x][y] != 1)
					  {
						  arr[x - 1][y - 1] = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
							  + mine[x][y - 1] + mine[x][y + 1]
							  + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + 48;
						  expand(arr, mine, row, col);
						  print(arr, row, col);
						  sum++;
						  printf("������%d����\n",sum);
						  if (sum == ROW*COL - MINE)
						  {
							  printf("��ϲ�㣬���׳ɹ���\n");
							  goto flag;
						  }
					  }
					  if (mine[x][y] == 1 && sum == 0)
					  {
						  printf("�����ף���ע�⣡");

					  }
					  else if (mine[x][y] == 1 && sum!=0)
					  {
						  printf("�ȵ����ˣ��㱻ը���ˣ�\n");
						  goto flag;
					  }

				  }
				  else
					  printf("���������룡\n\n");
			  }
	}
	}
	system("pause");
	return 0;
}