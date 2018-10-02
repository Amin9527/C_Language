#define _CRT_SECURE_NO_WARNINGS 1
#include"AddressList.h"
//通讯录可以用来存储1000个人的信息，每个人的信息包括： 
//姓名、性别、年龄、电话、住址
//
//提供方法：
//1. 添加联系人信息
//2. 删除指定联系人信息
//3. 查找指定联系人信息
//4. 修改指定联系人信息
//5. 显示所有联系人信息
//6. 清空所有联系人
//7. 以名字排序所有联系人
//
void display()
{
	printf("************************\n");
	printf("*******  通讯录  *******\n");
	printf("**** 1. 添加联系人 *****\n");
	printf("**** 2. 删除联系人 *****\n");
	printf("**** 3. 查找联系人 *****\n");
	printf("**** 4. 修改联系人 *****\n");
	printf("**** 5. 显示联系人 *****\n");
	printf("**** 6. 清空联系人 *****\n");
	printf("**** 7. 以名字排序 *****\n");
	printf("**** 0. 退出！     *****\n");


}

//初始化
void InitNode(Person* p)
{
	*p = NULL;
}

//添加联系人信息
void AddPerson(Person *p)
{
	assert(p);
	Person Node = *p;
	if (*p == NULL)//通讯录为空时
	{
		(*p) = (Person)malloc(sizeof(person));//为结构体指针变量开辟空间
		printf("请输入姓名：");
		scanf("%s", &(*p)->name);
		printf("请输入性别：");
		scanf("%s", &(*p)->sex);
		printf("请输入年龄：");
		scanf("%d", &(*p)->age);
		printf("请输入电话：");
		scanf("%s", &(*p)->phone);
		printf("请输入住址：");
		scanf("%s", &(*p)->add);
		(*p)->next = NULL;//节点中的next指向空
	}
	else//通讯录不为空时
	{
		while (Node->next)//找到最后一个人后面的空位置
			Node = (Node)->next;
		(Node->next) = (Person)malloc(sizeof(person));
		printf("请输入姓名：");
		scanf("%s", &(Node->next)->name);
		printf("请输入性别：");
		scanf("%s", &(Node->next)->sex);
		printf("请输入年龄：");
		scanf("%d", &(Node->next)->age);
		printf("请输入电话：");
		scanf("%s", &(Node->next)->phone);
		printf("请输入住址：");
		scanf("%s", &(Node->next)->add);
		Node->next->next = NULL;//使新节点的next指向空
	}
}

//删除联系人
void DeletePerson(Person* node)
{
	assert(node);
	Person p = *node;
	Person Pre = NULL;
	printf("请输入你要删除的人：");
	char name[10];
	scanf("%s", name);
	if (*node == NULL)
	{
		printf("通讯录为空！\n");
		return;
	}
	while (*name!=*(p)->name)//从头开始找名字相同的联系人
	{
		Pre = p;//保存前一个联系人节点
		p = p->next;//指向下一个联系人节点
		if (p == NULL)//没找到
		{
			printf("没有该联系人！\n");
			return;
		}
	}
	if (p != *node)//查找的联系人节点不为第一个联系人节点
		Pre->next = p->next;//使前一个联系人节点的next指向查找联系人节点的next（删除节点）
	else//查找的联系人为第一个联系人
		*node = (*node)->next;
	free(p);//释放删除联系人的空间
}

//查找联系人
Person FindPerson(Person p)
{
	char name[10];
	printf("请输入你要查找/修改的人：");
	scanf("%s", name);
	if (p == NULL)
	{
		printf("通讯录为空！\n");
		return NULL;
	}
	while (strcmp(name,p->name) != 0)//比较联系人姓名，不相等里层返回非零，外层为真，相等里层返回零，外层为假
	{
		p = p->next;
		if (p == NULL)
		{
			printf("没有该联系人！\n");
			return NULL;
		}
	}
	printf("姓名    性别  年龄   电话           住址\n\n");
	printf("%-6s  %-6s %-4d  %-13s %-20s", p->name,
		                               p->sex,
		                               p->age,
		                               p->phone,
		                               p->add);
	printf("\n");
	return p;
}

//修改联系人信息
void ChangePerson(Person* p)
{
	int n=0;
	Person node = FindPerson(*p);
	if (node == NULL)
		return;
	printf("您要修改的内容为：\n");
	printf("1.姓名  2.性别  3.年龄  4.电话  5.地址\n");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	{
			  printf("您要修改为：");
			  scanf("%s", node->name);
			  break;
	}
	case 2:
	{
			  printf("您要修改为：");
			  scanf("%s", node->sex);
			  break;
	}
	case 3:
	{
		printf("您要修改为：");
		scanf("%d", &node->age);
		break;
	}
	case 4:
	{
		printf("您要修改为：");
		scanf("%s", node->phone);
		break;
	}
	case 5:
	{
		printf("您要修改为：");
		scanf("%s", node->add);
		break;
	}
	default:
	{
		 printf("输入错误\n");
    	 break;
	}
	}
}

//展示联系人
void DisplayPerson(Person node)
{
	if (node == NULL)
	{
		printf("没有联系人！\n");
		return;
	}
	//printf("姓名    性别  年龄   电话           住址\n\n");
	printf("%-10s%-10s%-6s%-13s%s","姓名","性别","年龄","电话","住址\n");
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

//清空联系人
void EmptyPerson(Person* p)
{
	assert(p);
	if ((*p)->next != NULL)
		EmptyPerson(&((*p)->next));//递归
	free(*p);
	*p = NULL;
	return;
	
}

//按名字排序联系人
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
				if (j == 1)//第一个联系人节点就得排序
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