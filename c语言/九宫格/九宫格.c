#include<stdio.h>
#include<math.h>
int main()
{
    int arr[3][3],i=0,j=0,k=0,l=0,h=0;
    printf("请输入你要的宫格数：");
    scanf("%d",&k);
    l=(int)sqrt(k)-1;
    arr[i][j]<=9&&arr[i][j]>=1;
    for(i=0;i<=l;i++)
    {
        for(j=0;j<=l;j++)
        {
          if((arr[i][j],arr[i+1][j+1],arr[i+2][j+2],arr[i][j+1],arr[i][j+2],arr[i+1][j],arr[i+2][j],arr[i+1][j+2],arr[i+2][j+1])<=9&&(arr[i][j],arr[i+1][j+1],arr[i+2][j+2],arr[i][j+1],arr[i][j+2],arr[i+1][j],arr[i+2][j],arr[i+1][j+2],arr[i+2][j+1])>=1)
            if(arr[i][j]!=arr[i+1][j+1]!=arr[i+2][j+2]!=arr[i][j+1]!=arr[i][j+2]!=arr[i+1][j]!=arr[i+2][j]!=arr[i+1][j+2]!=arr[i+2][j+1])
                if((arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2])==(arr[i][j]+arr[i][j+1]+arr[i][j+2])==(arr[i][j]+arr[i+1][j]+arr[i+2][j]))
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}
