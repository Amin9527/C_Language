#include<stdio.h>
int main()
{
    int m=9,n=11;
    printf("m=%d,n=%d\n",m,n);
    int l=0;
    l=n;
    n=m;
    m=l;
    printf("m=%d,n=%d\n",m,n);
    return 0;
}
