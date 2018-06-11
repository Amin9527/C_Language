#include<stdio.h>
#include<windows.h>
//int m=0,n=0,l=0,i=0;
int zm(int x)
{

    if(x>9)
    {

        zm(x/10);//运用递归函数
    }

    Sleep(1000);
    printf("%d  ",x%10);
    return x;
}
int main()
{
    int m=0;
    printf("请输入一个数");
    scanf("%d",&m);
    printf("高 ");
    Sleep(1000);
    printf("兴 ");
    zm(m);
    printf("\n");
    system("pause");
    return 0;
}
