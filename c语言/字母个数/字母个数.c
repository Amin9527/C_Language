#include<stdio.h>
int main()
{
    int i=0,sum[26];
    char zm[26],ch='a';
    printf("请输入您的内容：");
    for(i=0;i<=25;i++)
    {
        zm[i]=ch;

        sum[i]=0;
        ch++;
    }
    while((ch=getchar())!=EOF)
    {
        for(i=0;i<=25;i++)
        {
          if(ch==zm[i])
          sum[i]++;
        }
    }
    for(i=0;i<=25;i++)
    {
    printf("输入内容中%c有%d个!\n",zm[i],sum[i]);
    }

    return 0;
}
