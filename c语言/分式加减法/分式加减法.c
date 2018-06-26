#include<stdio.h>
int main()
{
    int i=0,n=0;
    float j=0,k=0;
    for(i=1;i<=100;i=i+2)
    {
        j=j+1.0/i;
    }
    printf("%f\n",j);
    for(n=2;n<=100;n=n+2)
    {
        k=k+1.0/n;
    }
     printf("%f\n",k);
     printf("%f\n",j-k);
    return 0;
}
