#include<stdio.h>
int main()
{
    int i=0,j=0;
    flag:
    printf("������һ��������");
    scanf("%d",&i);
    if(i<0 || i>9)
        printf("������0~9������!\n");
    else
    {
    j=i+(10*i+i)+(100*i+10*i+i)+(1000*i+100*i+10*i+i)+(10000*i+1000*i+100*i+10*i+i);
    printf("%d%d%d%d%d+%d%d%d%d+%d%d%d+%d%d+%d=%d\n",i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,j);
    }
    goto flag;
    return 0;
}
