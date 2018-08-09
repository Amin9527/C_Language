#define _CRT_SECURE_NO_WARNINGS 1
#include"AddressList.h"
int main()
{
	int n = 0;
	Person p;
	InitNode(&p);
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
				  AddPerson(&p);
				  break;
		}
		case 2:
		{
				  DeletePerson(&p);
				  break;
		}
		case 3:
		{
				  FindPerson(p);
				  break;
		}
		case 4:
		{
				  ChangePerson(&p);
				  break;
		}
		case 5:
		{
				  DisplayPerson(p);
				  break;
		}
		case 6:
		{
				  EmptyPerson(&p);
				  break;
		}
		case 7:
		{
				  SortPerson_name(&p);
				  break;
		}
		case 0:
		{
				  return 0;
				  break;
		}
		default:
		{
				   printf(" ‰»Î¥ÌŒÛ!\n");
				   break;
		}
		}
	}
	
	//DisplayPerson(node);
	system("pause");
	return 0;
}