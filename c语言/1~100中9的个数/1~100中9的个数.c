#include<stdio.h>
int main()
{

    int i=0,j=0,k=0;
    printf("������1~100֮�������");
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
    printf("%d����9�ĸ���Ϊ%d��\n",k,j);
    return 0;

}
