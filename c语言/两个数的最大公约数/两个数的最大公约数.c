#include<stdio.h>
int main()
{
    int a=0,m=0,n=0,i=0;
    printf("请输入两个数：");
    scanf("%d%d",&a,&n);
    if(a<n) m=a;else m=n;
    for(i=m;i>=2;i--)
    {
        if((a%i==0)&&(n%i==0))
        break;
    }
           printf("最大公约数为：%d\n",i);
    return i;
}
