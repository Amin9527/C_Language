#include<stdio.h>
int main()
{
    int arr[100][100],i=0,j=0,k=0,h=0,l=0;
    printf("��������Ҫ�鿴��������ǵ���������1��100����");
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
    //printf("��������Ҫ���ҵ�λ�ã��У�");
    //scanf("%d",&h);
    //printf("�У�");
    //scanf("%d",&l);
    //printf("��%d��,��%d�е���Ϊ%d��\n",h,l,arr[h-1][l-1]);
    return 0;
}
