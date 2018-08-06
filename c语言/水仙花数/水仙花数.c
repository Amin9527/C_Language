#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,j=0,k=0,l=0;
    printf("0~999之间的水仙花数有：");
    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            for(k=0;k<=9;k++)
            {
                l=pow(i,3)+pow(j,3)+pow(k,3);
                if(100*i+10*j+k==l)
                    printf("%d  ",l);

            }
        }

    }
    return 0;
}
