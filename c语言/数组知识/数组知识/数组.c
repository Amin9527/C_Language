#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[] = { 1, 2, 3, 4 ,5};
	printf("%d ", sizeof(a));//20,a��ʾ��������
	printf("%d ", sizeof(a + 0));//4��a��ʾ��Ԫ�ص�ַ
	printf("%d ", sizeof(*a));//4��a��ʾ��Ԫ�ص�ַ��*a��ʾ��Ԫ��
	printf("%d ", sizeof(a + 1));//4��a��ʾ��Ԫ�ص�ַ
	printf("%d ", sizeof(a[1]));//4
	printf("%d ", sizeof(&a));//4
	printf("%d ", sizeof(&a + 1));//4
	printf("%d ", sizeof(&a[0]));//4
	printf("%d ", sizeof(&a[0] + 1));//4
	printf("\n");

	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d ", sizeof(arr));//6,arr��ʾ��������
	printf("%d ", sizeof(arr + 0));//4��arr��ʾ��Ԫ�ص�ַ
	printf("%d ", sizeof(*arr));//1��arr��ʾ��Ԫ�ص�ַ
	printf("%d ", sizeof(arr[1]));//1
	printf("%d ", sizeof(&arr));//4
	printf("%d ", sizeof(&arr + 1));//4
	printf("%d ", sizeof(&arr[0] + 1));//4
	printf("\n");
	printf("%d ", strlen(arr));//����ֵ
	printf("%d ", strlen(arr + 0));//����ֵ
	//printf("%d ", strlen(*arr));
	printf("���� ");
	//printf("%d ", strlen(arr[1]));
	printf("���� ");

	printf("%d ", strlen(&arr));//����ֵ
	printf("%d ", strlen(&arr + 1));//����ֵ
	printf("%d ", strlen(&arr[0] + 1));//����ֵ
	printf("\n");
	char *p = "abcdef";
	printf("%d ", sizeof(p));//4����Ԫ�ص�ַ
	printf("%d ", sizeof(p + 1));//4��p+1��ʾ�ڶ���Ԫ�ص�ַ
	printf("%d ", sizeof(*p));//1��*p��ʾ��һ��Ԫ��
	printf("%d ", sizeof(p[0]));//1
	printf("%d ", sizeof(&p));//4
	printf("%d ", sizeof(&p + 1));//4
	printf("%d ", sizeof(&p[0] + 1));//4
	printf("\n");
	printf("%d ", strlen(p));//6��p��ʾ��Ԫ�ص�ַ
	printf("%d ", strlen(p + 1));//5��P+1��ʾ�ڶ���Ԫ�ص�ַ
    //printf("%d ", strlen(*p));
	printf("���� ");

    //printf("%d ", strlen(p[0]));
	printf("���� ");

	printf("%d ", strlen(&p));//����ֵ
	printf("%d ", strlen(&p + 1));//����ֵ
	printf("%d ", strlen(&p[0] + 1));//5��&p[0]+1��ʾ�ڶ���Ԫ�ص�ַ
	printf("\n");
	int aa[3][4] = { 0 };
	printf("%d ", sizeof(aa));//48��aa��ʾ��������
	printf("%d ", sizeof(aa[0][0]));//4
	printf("%d ", sizeof(aa[0]));//16��aa[0]��ʾ��һ��
	printf("%d ", sizeof(aa + 1));//������16��aa+1��ʾ�ڶ��У�4��aa��ʾ��һ�е�ַ����ַ+1���ǵ�ַ
	printf("%d ", sizeof(aa[0]+1));//������16��aa[0]+1��ʾ�ڶ��У�,4,aa[0]+1��ʾ��һ�еڶ���Ԫ�صĵ�ַ
	printf("%d ", sizeof(&aa[0] + 1));//4
	printf("%d ", sizeof(*aa));//16��*aa��ʾ��Ԫ�أ�����һ�е�ַ
	printf("%d ", sizeof(aa[3]));//16��aa[3]��ʾ�����У���Ȼû�е�����
	printf("\n");
	system("pause");
	return 0;
}
