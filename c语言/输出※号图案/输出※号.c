#include<stdio.h>
int main()
{
    int arr[26][13],i=0,j=0,k=0,h=11;
    for(i=0;i<=12;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(0==i%2)
            printf("%c",arr[i][j]=42);

        }
        printf("\n");
    }
        for(i=13;i<=24;i++)
            {
                for(k=0;k<=h;k++)
                 {
                    if(0==i%2)
                    printf("%c",arr[i][k]=42);

                 }
                 h--;
                printf("\n");
            }
    return 0;
}
