#include<stdio.h>
int prime_judge(int x)
{
    int y;
    if(2==x)
         return 1;
    for(y=2;y<x;y++)
    {
        if(0==x%y)
        return 0;
    }
    return 1;

}
int main()
{
    int number=0;
    printf("��������Ҫ�жϵ�����");
    scanf("%d",&number);
    if(prime_judge(number))
        printf("%d��������",number);
    else
        printf("%d����������",number);
    return 0;
}
