#include<stdio.h>
int main()
{
    int i=0,j=0,sum=0,k=0,m=0,n=0;
    printf("����������������");
    scanf("%d%d",&i,&j);
    m=i;
    n=j;
    while(k<32)
    {
        if(i<0 && j<0)
        {
            if(-i%2!=-j%2)
            {
                sum++;
            }
            i=i>>1;
            j=j>>1;
            k++;
        }
         else if(i<0 && j>=0)
        {
            if(-i%2!=j%2)
            {
                sum++;
            }
            i=i>>1;
            j=j>>1;
            k++;
        }
        else if(i>=0 && j<0)
        {
            if(i%2!=-j%2)
            {
                sum++;
            }
            i=i>>1;
            j=j>>1;
            k++;
        }
         else(i>=0 && j>=0);
        {
            if(i%2!=j%2)
            {
                sum++;
            }
            i=i>>1;
            j=j>>1;
            k++;
        }
    }
    printf("%d��%d����������һ����%dͬλ����ȣ�",m,n,sum);
    return 0;
}
