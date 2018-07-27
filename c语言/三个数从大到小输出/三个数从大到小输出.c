#include<stdio.h>
int main()
{
    int a[3],i=0,m=0,n=0,p=0,s=0,t=0,l=0;
    printf("请输入三个数:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }

    if(a[0]>=a[1])
        {m=a[0];l=a[1];}else{m=a[1];l=a[0];}
    if(a[2]>=m)
        {n=a[2];t=m;}else{n=m;t=a[2];}
    if(l>=t)
        {s=l;p=t;}else{s=t;p=l;}

    printf("从大到小为：%d > %d > %d\n",n,s,p);
    return 0;
}
