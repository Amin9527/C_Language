#define _CRT_SECURE_NO_WARNINGS 1
#include"AddressList.h"
int main()
{
	int n = 0;
	Person p;
	InitNode(&p);//��ʼ��
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
				  AddPerson(&p);//�����ϵ��
				  break;
		}
		case 2:
		{
				  DeletePerson(&p);//ɾ����ϵ��
				  break;
		}
		case 3:
		{
				  FindPerson(p);//������ϵ��
				  break;
		}
		case 4:
		{
				  ChangePerson(&p);//�޸���ϵ����Ϣ
				  break;
		}
		case 5:
		{
				  DisplayPerson(p);//չʾ������ϵ����Ϣ
				  break;
		}
		case 6:
		{
				  EmptyPerson(&p);//�����ϵ��
				  break;
		}
		case 7:
		{
				  SortPerson_name(&p);//������������ϵ��
				  break;
		}
		case 0:
		{
				  return 0;//�Ƴ�
				  break;
		}
		default:
		{
				   printf("�������!\n");
				   break;
		}
		}
	}
	system("pause");
	return 0;
}