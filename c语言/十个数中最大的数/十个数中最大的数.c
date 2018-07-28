#include<stdio.h>
int main()
{
    int a[9];
    int i=0,m=0,n=0,l=0,o=0,p=0,s=0,t=0,u=0,z=0,y=0;
    printf("请输入十个整数：");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
        if(a[1]>=a[2]) m=a[1];else m=a[2];
        if(a[3]>=a[4]) n=a[3];else n=a[4];
        if(a[5]>=a[6]) l=a[5];else l=a[6];
        if(a[9]>=a[0]) s=a[9];else s=a[0];
        if(a[7]>=a[8]) o=a[7];else o=a[8];
        if(m>=n) p=m;else p=n;
        if(l>=s) t=l;else t=s;
        if(o>=p) u=o;else u=p;
        if(u>=t) z=u;else z=t;


            printf("输入的最大整数为：%d\n",z);
    return 0;

}
