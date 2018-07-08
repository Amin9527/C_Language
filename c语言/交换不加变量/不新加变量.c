#include<stdio.h>
int main()
{
    int m=9,n=11;
    printf("m=%d,n=%d\n",m,n);
    m=m+n;
    n=m-n;
    m=m-n;
    printf("m=%d,n=%d\n",m,n);
    return 0;
}
