#include<stdio.h>
int main()
{
    int i=0,m=0,n=1;
    printf("������һ������");
    scanf("%d",&i);
    for(m=i;m>0;m--)
    {
        n=m*n;

    }
    printf("%d�Ľ׳˵��� %d",i,n);
    return 0;
}
