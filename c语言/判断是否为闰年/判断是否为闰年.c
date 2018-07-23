#include<stdio.h>
int leap_year(int x)
{
    return ((0==x%4 && x%100!=0) || (0==x%400));
}
int main()
{
    int a=0,b=0,year=0;
    printf("请输入你要判断的年份：");
    scanf("%d",&year);
    if(leap_year(year))
        printf("是闰年！");
    else
        printf("不是闰年！");
    return 0;
}
