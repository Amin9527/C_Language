#include<stdio.h>
int leap_year(int x)
{
    return ((0==x%4 && x%100!=0) || (0==x%400));
}
int main()
{
    int a=0,b=0,year=0;
    printf("��������Ҫ�жϵ���ݣ�");
    scanf("%d",&year);
    if(leap_year(year))
        printf("�����꣡");
    else
        printf("�������꣡");
    return 0;
}
