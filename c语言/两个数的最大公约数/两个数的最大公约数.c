#include<stdio.h>
int main()
{
    int a=0,m=0,n=0,i=0;
    printf("��������������");
    scanf("%d%d",&a,&n);
    if(a<n) m=a;else m=n;
    for(i=m;i>=2;i--)
    {
        if((a%i==0)&&(n%i==0))
        break;
    }
           printf("���Լ��Ϊ��%d\n",i);
    return i;
}
