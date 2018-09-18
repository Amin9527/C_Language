#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,7,8,9,10},i=0,mid=0,left=0,right=0;
    printf("请输入您要查找的数字：");
    scanf("%d",&i);
    right=sizeof(arr)/sizeof(arr[0])-1;//right为最右边元素的下标
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(i==arr[mid])
        {
            printf("找到了！下表为%d \n",mid);
            break;
        }
        else if(i>arr[mid])
        {
           left=mid+1;
        }
        else if(i<arr[mid])
        {
            right=mid-1;
        }
    }

    if(left>right)
        {
           printf("查无此数！\n");
           return -1;
        }
    return 0;
}
