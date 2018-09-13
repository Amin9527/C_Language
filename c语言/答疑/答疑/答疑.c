#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
//#include<string.h>
#include<stdio.h>
//#include<string>
//#include<iostream>
//using namespace std;
#if 0
/*
struct
{
	struct
	{
		int i;
		short array[2];
	}s;
	union
	{
		int j;
		short array[2];
	}u;
}s1;

int main()
{
	s1.s.array[0] = 0x1111;
	s1.s.array[1] = 0x2222;
	s1.u.array[0] = 0x3333;
	s1.u.array[1] = 0x4444;
	printf("%x\n", s1.s.i);
	printf("%x\n", s1.u.j);
	system("pause");
	return 0;
}
*/
//----------------------------------------------------------------

//free释放空间

//int main()
//{
//	int *b = (int*)malloc(sizeof(int));
//	*b = 4;
//	int* a = b;
//	int *c = (int*)malloc(sizeof(int));
//	free(a);
//	printf("%d\n", *b);
//	*c = 5;
//	a = c;
//	printf("%d\n", *a);
//	getchar();
//	return 0;
//}
//---------------------------------------------
/*
int main()
{
		     char* a = "\x0a7";
             char* b = "\0123";
		     char* c = "\x000ff";
			 char* d = "\\x0123";
			 int e = '\40';
		     cout << strlen(a) << endl;
		     cout << strlen(b) << endl;
		     cout << strlen(c) << endl;
			 cout << d<< endl;
			 cout << e << endl;
			 system("pause");
		     return 0;
}
*/
//-------------------------------------------------------
/*
static int x = 0;

void test1()
{
	x = 0;
	x++;
}
void test2()
{
	static int y = 0;
	y++;
	cout <<"Y = "<< y<<"," ;
}
int main()
{
	for(int i = 0; i < 10;i++)
	{
		test1();
		test2();
		cout << "x = " << x <<endl;
	}
	system("pause");
}
*/
//------------------------------------------------------------------
#endif
/*
int main()
{
	int a = 7 % -4;//3
	int b = -7 % 4;//-3
	int c = -7 % -4;//-3
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}
*/
//------------------------------------------
/*
int main()
{
	int a = -8;
	a = a >> 3;//-1
	cout << a << endl;
	system("pause");
	return 0;
}
*/
//------------------------------------------
/*
int func()
{
	static int a = 0;
	return ++a;
}
int main()
{
	int m = func() + func() * func();//1+2*3=7
	cout << m << endl;
	system("pause");
	return 0;
}
*/
//------------------------------------------
/*
int main()
{
	char *arr = "zhangmin";
	char *arr1 = "gaoxing";
	size_t m = strlen(arr1) - strlen(arr);//sizt_t 无符号整形，strlen返回无符号整形
	cout << m<< endl;
	system("pause");
	return 0;
}
*/
//-------------------------大小写字母转换----
/*
int main()
{
	cout << (char)tolower('A') << endl;//tolower()大写转小写
	cout << (char)toupper('b') << endl;//toupper（）小写转大写
	cout << (int)tolower('1') << endl;
	system("pause");
	return 0;
}
*/
//-------------------------------------------
/*
int main()
{
	typedef struct person
	{
		int age;
		char sex;
		char name[10];
	}per;
	per zm[2] = { { 20, 'M', "zhangmin" }, { 19, 'W', "gaoxing" } };
	system("pause");
	return 0;
}
*/
//--------------------------------------
/*
typedef struct person
{
	struct person* left;
	struct person* right;
	int age;
}per;

int main()
{
	per zm = {NULL,NULL,22};
	system("pause");
	return 0;
}
*/
//----------------------------------------
/*
void swap(int* p1, int* p2)
{
	int p;
	p = *p1;
	*p1 = *p2;
	*p2 = p;
}
int main()
{
	int a = 3, b = 5;
	int *p1, *p2;
	p1 = &a, p2 = &b;
	printf("a=%d,b=%d\n", *p1, *p2);
	printf("a=%d,b=%d\n", a,b);
	swap(p1, p2);
	printf("a=%d,b=%d\n", *p1, *p2);
	printf("a=%d,b=%d\n", a,b);
	system("pause");
	return 0;
}
*/
//------------------------------------
/*
void swap(int& p1, int& p2)
{
	int c;
	c = p1;
	p1 = p2;
	p2 = c;
}
int main()
{
	int a = 3, b = 5;
	printf("a=%d,b=%d\n", a, b);
	swap(a, b);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}
*/
//-------------------------------
/*
void swap(int* p1, int* p2)
{
	int c;
	c = *p1;
	*p1 = *p2;
	*p2 = c;
}
int main()
{
	int a = 3, b = 5;
	printf("a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}
*/

//-------------------------------
int main()
{
	//int i = 0;
	//int arr[10] = { 0 };
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	system("pause");
	return 0;
}