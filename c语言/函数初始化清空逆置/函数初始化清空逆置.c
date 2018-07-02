#include<stdio.h>
int arr[]={0};
void init(int sz,int arr[])
{
    int n=0,number=0;
    printf("你要初始化的值:");
    scanf("%d",&n);
    for(number=0;number<sz;number++)
    {
        arr[number]=n;
        printf("%d  ",arr[number]);
    }
    printf("\n");
}
void empty(int sz,int arr[])
{
    int number=0;
    for(number=0;number<sz;number++)
    {
        arr[number]=0;
        printf("%d ",arr[number]);
    }
    printf("\n");
}
void reverse(int arr[],int sz)
{
   int left=0,right=sz-1,tmp=0,n=0;
   while(left<right)
   {
      tmp=arr[left];
      arr[left]=arr[right];
      arr[right]=tmp;
      left++;
      right--;

   }
   for(n=0;n<sz;n++)
   {
        printf("%d ",arr[n]);
   }
   printf("\n");

}
int main()
{
    int i=0,size=0,choose=0;
    printf("请输入你要定义的数组个数：");
    scanf("%d",&size);
    printf("请输入数组元素：");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("你定义的数组为：");
     for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("数组大小%d ",size);
    printf("          请选择         \n");
    printf("1.初始化   2.清空    3.逆置  \n");
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:init(size,arr);break;
        case 2:empty(size,arr);break;
        case 3:reverse(arr,size);break;
    }
    return 0;
}
