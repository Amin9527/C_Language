#include<stdio.h>
int main()
{
    int arr[100][100],i=0,j=0,k=0,h=0,l=0;
    printf("请输入你要查看的杨辉三角的总行数（1到100）：");
    scanf("%d",&k);


    for(i=0;i<=k-1;i++)
    {
        for(j=0;j<=i;j++)
        {
            arr[i][0]=1;
            if(i==j)
            arr[i][j]=1;
            else if(i>1)
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            printf("%-5d",arr[i][j]);
        }
        printf("\n");
    }
   // printf("1 ...........................\n");
    //printf("请输入您要查找的位置：行：");
    //scanf("%d",&h);
    //printf("列：");
    //scanf("%d",&l);
    //printf("第%d行,第%d列的数为%d！\n",h,l,arr[h-1][l-1]);
    return 0;
}
