#include<stdio.h>
swap(int* x,int* y)
{
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
int main()
{
    int a=0,b=0;
    printf("请输入两个数a,b：");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
    return 0;
}
