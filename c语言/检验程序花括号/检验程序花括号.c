#include<stdio.h>
int main()
{
    int sum=0;
    char ch;
    while((ch=getchar())!=EOF)
    {
        if(ch=='{')
            {
                sum++;
            }
            if(ch=='}' && sum==0)
                break;
        if(ch=='}')
        {
            sum--;
        }
    }
    if(sum==0)
    {
        printf("����������ȷ��\n");
    }
    else if(sum!=0)
        printf("�������Ų���ȷ(�����)��\n");
        system("pause");
    return 0;
}
