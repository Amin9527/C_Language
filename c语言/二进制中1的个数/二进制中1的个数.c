#include<stdio.h>
int main()
{
    int i=0,j=0,sum=0,l=0;
    printf("������һ������");
    scanf("%d",&i);
     l=i;
    while(j<32)
    {
       // k=i%2;

        if(1==i%2 || -1==i%2)
        {
            sum++;
        }
        i=i>>1;
        j++;
    }
    printf("%d����%d��1��",l,sum);
    return 0;
}

