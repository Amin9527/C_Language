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
    printf("��������Ҫ��ӡ�ĳ˷��ھ���������");
    scanf("%d",&a);
    mpt_table(a);
    return 0;
}
