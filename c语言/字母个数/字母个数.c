#include<stdio.h>
int main()
{
    int i=0,sum[26];
    char zm[26],ch='a';
    printf("�������������ݣ�");
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
    printf("����������%c��%d��!\n",zm[i],sum[i]);
    }

    return 0;
}
