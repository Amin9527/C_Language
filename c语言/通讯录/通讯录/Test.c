#define _CRT_SECURE_NO_WARNINGS 1
#include"AddressList.h"
int main()
{
	int n = 0;
	Person p;
	InitNode(&p);//初始化
	while (1)
	{
		printf("***********************************************************************************\n");
		display();
		printf("***********************************************************************************\n");
		printf("***********************************************************************************\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
				  AddPerson(&p);//添加联系人
				  break;
		}
		case 2:
		{
				  DeletePerson(&p);//删除联系人
				  break;
		}
		case 3:
		{
				  FindPerson(p);//查找联系人
				  break;
		}
		case 4:
		{
				  ChangePerson(&p);//修改联系人信息
				  break;
		}
		case 5:
		{
				  DisplayPerson(p);//展示所有联系人信息
				  break;
		}
		case 6:
		{
				  EmptyPerson(&p);//清空联系人
				  break;
		}
		case 7:
		{
				  SortPerson_name(&p);//按名字排序联系人
				  break;
		}
		case 0:
		{
				  return 0;//推出
				  break;
		}
		default:
		{
				   printf("输入错误!\n");
				   break;
		}
		}
	}
	system("pause");
	return 0;
}