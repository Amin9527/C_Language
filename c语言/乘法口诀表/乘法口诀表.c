#include<stdio.h>

void mpt_table(int x)
{
    int i=0,j=0;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-5d",j,i,j*i);
        }
        printf("\n");
    }

}
int main()
{
    int a=0;
    printf("请输入你要打印的乘法口诀表行数：");
    scanf("%d",&a);
    mpt_table(a);
    return 0;
}
