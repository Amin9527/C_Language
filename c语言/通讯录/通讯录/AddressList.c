#define _CRT_SECURE_NO_WARNINGS 1
#include"AddressList.h"
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������ 
//�������Ա����䡢�绰��סַ
//
//�ṩ������
//1. �����ϵ����Ϣ
//2. ɾ��ָ����ϵ����Ϣ
//3. ����ָ����ϵ����Ϣ
//4. �޸�ָ����ϵ����Ϣ
//5. ��ʾ������ϵ����Ϣ
//6. ���������ϵ��
//7. ����������������ϵ��
//
void display()
{
	printf("************************\n");
	printf("*******  ͨѶ¼  *******\n");
	printf("**** 1. �����ϵ�� *****\n");
	printf("**** 2. ɾ����ϵ�� *****\n");
	printf("**** 3. ������ϵ�� *****\n");
	printf("**** 4. �޸���ϵ�� *****\n");
	printf("**** 5. ��ʾ��ϵ�� *****\n");
	printf("**** 6. �����ϵ�� *****\n");
	printf("**** 7. ���������� *****\n");
	printf("**** 0. �˳���     *****\n");


}

//��ʼ��
void InitNode(Person* p)
{
	*p = NULL;
}

//�����ϵ����Ϣ
void AddPerson(Person *p)
{
	assert(p);
	Person Node = *p;
	if (*p == NULL)//ͨѶ¼Ϊ��ʱ
	{
		(*p) = (Person)malloc(sizeof(person));//Ϊ�ṹ��ָ��������ٿռ�
		printf("������������");
		scanf("%s", &(*p)->name);
		printf("�������Ա�");
		scanf("%s", &(*p)->sex);
		printf("���������䣺");
		scanf("%d", &(*p)->age);
		printf("������绰��");
		scanf("%s", &(*p)->phone);
		printf("������סַ��");
		scanf("%s", &(*p)->add);
		(*p)->next = NULL;//�ڵ��е�nextָ���
	}
	else//ͨѶ¼��Ϊ��ʱ
	{
		while (Node->next)//�ҵ����һ���˺���Ŀ�λ��
			Node = (Node)->next;
		(Node->next) = (Person)malloc(sizeof(person));
		printf("������������");
		scanf("%s", &(Node->next)->name);
		printf("�������Ա�");
		scanf("%s", &(Node->next)->sex);
		printf("���������䣺");
		scanf("%d", &(Node->next)->age);
		printf("������绰��");
		scanf("%s", &(Node->next)->phone);
		printf("������סַ��");
		scanf("%s", &(Node->next)->add);
		Node->next->next = NULL;//ʹ�½ڵ��nextָ���
	}
}

//ɾ����ϵ��
void DeletePerson(Person* node)
{
	assert(node);
	Person p = *node;
	Person Pre = NULL;
	printf("��������Ҫɾ�����ˣ�");
	char name[10];
	scanf("%s", name);
	if (*node == NULL)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return;
	}
	while (*name!=*(p)->name)//��ͷ��ʼ��������ͬ����ϵ��
	{
		Pre = p;//����ǰһ����ϵ�˽ڵ�
		p = p->next;//ָ����һ����ϵ�˽ڵ�
		if (p == NULL)//û�ҵ�
		{
			printf("û�и���ϵ�ˣ�\n");
			return;
		}
	}
	if (p != *node)//���ҵ���ϵ�˽ڵ㲻Ϊ��һ����ϵ�˽ڵ�
		Pre->next = p->next;//ʹǰһ����ϵ�˽ڵ��nextָ�������ϵ�˽ڵ��next��ɾ���ڵ㣩
	else//���ҵ���ϵ��Ϊ��һ����ϵ��
		*node = (*node)->next;
	free(p);//�ͷ�ɾ����ϵ�˵Ŀռ�
}

//������ϵ��
Person FindPerson(Person p)
{
	char name[10];
	printf("��������Ҫ����/�޸ĵ��ˣ�");
	scanf("%s", name);
	if (p == NULL)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return NULL;
	}
	while (strcmp(name,p->name) != 0)//�Ƚ���ϵ���������������㷵�ط��㣬���Ϊ�棬�����㷵���㣬���Ϊ��
	{
		p = p->next;
		if (p == NULL)
		{
			printf("û�и���ϵ�ˣ�\n");
			return NULL;
		}
	}
	printf("����    �Ա�  ����   �绰           סַ\n\n");
	printf("%-6s  %-6s %-4d  %-13s %-20s", p->name,
		                               p->sex,
		                               p->age,
		                               p->phone,
		                               p->add);
	printf("\n");
	return p;
}

//�޸���ϵ����Ϣ
void ChangePerson(Person* p)
{
	int n=0;
	Person node = FindPerson(*p);
	if (node == NULL)
		return;
	printf("��Ҫ�޸ĵ�����Ϊ��\n");
	printf("1.����  2.�Ա�  3.����  4.�绰  5.��ַ\n");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	{
			  printf("��Ҫ�޸�Ϊ��");
			  scanf("%s", node->name);
			  break;
	}
	case 2:
	{
			  printf("��Ҫ�޸�Ϊ��");
			  scanf("%s", node->sex);
			  break;
	}
	case 3:
	{
		printf("��Ҫ�޸�Ϊ��");
		scanf("%d", &node->age);
		break;
	}
	case 4:
	{
		printf("��Ҫ�޸�Ϊ��");
		scanf("%s", node->phone);
		break;
	}
	case 5:
	{
		printf("��Ҫ�޸�Ϊ��");
		scanf("%s", node->add);
		break;
	}
	default:
	{
		 printf("�������\n");
    	 break;
	}
	}
}

//չʾ��ϵ��
void DisplayPerson(Person node)
{
	if (node == NULL)
	{
		printf("û����ϵ�ˣ�\n");
		return;
	}
	//printf("����    �Ա�  ����   �绰           סַ\n\n");
	printf("%-10s%-10s%-6s%-13s%s","����","�Ա�","����","�绰","סַ\n");
	while(node!=NULL)
	{
	    printf("%-10s%-10s%-6d%-13s%-20s", node->name, 
			                               node->sex, 
			                               node->age, 
			                               node->phone, 
			                               node->add);
		printf("\n");
		node = node->next;
	}
	
}

//�����ϵ��
void EmptyPerson(Person* p)
{
	assert(p);
	if ((*p)->next != NULL)
		EmptyPerson(&((*p)->next));//�ݹ�
	free(*p);
	*p = NULL;
	return;
	
}

//������������ϵ��
void SortPerson_name(Person* p)
{
	assert(p);
	Person node = *p, Node = *p, pre = *p;
	int count = 0;
	while (node!= NULL)
	{
		count++;
		node = node->next;
	}
	for (int i = 1; i < count; i++)
	{
		for (int j = 1; j <= (count - i); j++)
		{
			if (strcmp(Node->name, Node->next->name)>0)
			{
				if (j == 1)//��һ����ϵ�˽ڵ�͵�����
				{
					Node = Node->next;
					pre->next = Node->next;
					Node->next = pre;
					*p = Node;
				}
				else
				{
					pre->next = Node->next;
					Node->next = Node->next->next;
					pre->next->next = Node;
				}
			}
			if (j > 1)
			{
				pre = pre->next;
			}
			Node = pre->next;
		}
		pre = *p;
		Node = pre;
	}
}