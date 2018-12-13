#include<stdio.h>
int main()
{
    int i=0,j=0;
    printf("请输入一个数：");
    scanf("%d",&i);
    printf("%d的二进制序列为：",i);
    while(j<32)
    {
        if(i<0)
        {
            printf("%d",-i%2);
            i=i>>1;
            j++;
        }
        else
        {
             printf("%d",i%2);
             i=i>>1;
             j++;
        }

    }
    return 0;
}
