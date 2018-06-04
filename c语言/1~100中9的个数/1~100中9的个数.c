#include<stdio.h>
int main()
{

    int i=0,j=0,k=0;
    printf("请输入1~100之间的数：");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        if(i%10==9)
        {
            j++;
        }
        if(i/10==9)
        {
           j++;
        }
    }
    printf("%d以内9的个数为%d！\n",k,j);
    return 0;

}
