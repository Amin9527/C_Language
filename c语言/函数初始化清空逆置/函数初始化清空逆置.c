#include<stdio.h>
int arr[]={0};
void init(int sz,int arr[])
{
    int n=0,number=0;
    printf("��Ҫ��ʼ����ֵ:");
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
    printf("��������Ҫ��������������");
    scanf("%d",&size);
    printf("����������Ԫ�أ�");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("�㶨�������Ϊ��");
     for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("�����С%d ",size);
    printf("          ��ѡ��         \n");
    printf("1.��ʼ��   2.���    3.����  \n");
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:init(size,arr);break;
        case 2:empty(size,arr);break;
        case 3:reverse(arr,size);break;
    }
    return 0;
}
