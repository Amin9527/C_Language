#include<stdio.h>
int main()
{
    int i=0,m=0,n=1;
    printf("请输入一个数：");
    scanf("%d",&i);
    for(m=i;m>0;m--)
    {
        n=m*n;

    }
    printf("%d的阶乘等于 %d",i,n);
    return 0;
}
