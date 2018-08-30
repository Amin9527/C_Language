#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[] = { 1, 2, 3, 4 ,5};
	printf("%d ", sizeof(a));//20,a表示整个数组
	printf("%d ", sizeof(a + 0));//4，a表示首元素地址
	printf("%d ", sizeof(*a));//4，a表示首元素地址，*a表示首元素
	printf("%d ", sizeof(a + 1));//4，a表示首元素地址
	printf("%d ", sizeof(a[1]));//4
	printf("%d ", sizeof(&a));//4
	printf("%d ", sizeof(&a + 1));//4
	printf("%d ", sizeof(&a[0]));//4
	printf("%d ", sizeof(&a[0] + 1));//4
	printf("\n");

	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d ", sizeof(arr));//6,arr表示整个数组
	printf("%d ", sizeof(arr + 0));//4，arr表示首元素地址
	printf("%d ", sizeof(*arr));//1，arr表示首元素地址
	printf("%d ", sizeof(arr[1]));//1
	printf("%d ", sizeof(&arr));//4
	printf("%d ", sizeof(&arr + 1));//4
	printf("%d ", sizeof(&arr[0] + 1));//4
	printf("\n");
	printf("%d ", strlen(arr));//任意值
	printf("%d ", strlen(arr + 0));//任意值
	//printf("%d ", strlen(*arr));
	printf("错误 ");
	//printf("%d ", strlen(arr[1]));
	printf("错误 ");

	printf("%d ", strlen(&arr));//任意值
	printf("%d ", strlen(&arr + 1));//任意值
	printf("%d ", strlen(&arr[0] + 1));//任意值
	printf("\n");
	char *p = "abcdef";
	printf("%d ", sizeof(p));//4，首元素地址
	printf("%d ", sizeof(p + 1));//4，p+1表示第二个元素地址
	printf("%d ", sizeof(*p));//1，*p表示第一个元素
	printf("%d ", sizeof(p[0]));//1
	printf("%d ", sizeof(&p));//4
	printf("%d ", sizeof(&p + 1));//4
	printf("%d ", sizeof(&p[0] + 1));//4
	printf("\n");
	printf("%d ", strlen(p));//6，p表示首元素地址
	printf("%d ", strlen(p + 1));//5，P+1表示第二个元素地址
    //printf("%d ", strlen(*p));
	printf("错误 ");

    //printf("%d ", strlen(p[0]));
	printf("错误 ");

	printf("%d ", strlen(&p));//任意值
	printf("%d ", strlen(&p + 1));//任意值
	printf("%d ", strlen(&p[0] + 1));//5，&p[0]+1表示第二个元素地址
	printf("\n");
	int aa[3][4] = { 0 };
	printf("%d ", sizeof(aa));//48，aa表示整个数组
	printf("%d ", sizeof(aa[0][0]));//4
	printf("%d ", sizeof(aa[0]));//16，aa[0]表示第一行
	printf("%d ", sizeof(aa + 1));//（错误：16，aa+1表示第二行）4，aa表示第一行地址，地址+1还是地址
	printf("%d ", sizeof(aa[0]+1));//（错误：16，aa[0]+1表示第二行）,4,aa[0]+1表示第一行第二个元素的地址
	printf("%d ", sizeof(&aa[0] + 1));//4
	printf("%d ", sizeof(*aa));//16，*aa表示首元素，即第一行地址
	printf("%d ", sizeof(aa[3]));//16，aa[3]表示第四行，虽然没有第四行
	printf("\n");
	system("pause");
	return 0;
}
