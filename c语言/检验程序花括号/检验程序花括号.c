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
        printf("程序花括号正确！\n");
    }
    else if(sum!=0)
        printf("程序花括号不正确(不相等)！\n");
        system("pause");
    return 0;
}
