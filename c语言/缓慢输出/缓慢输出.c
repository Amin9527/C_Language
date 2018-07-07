#include<stdio.h>
#include<Windows.h>
#include<string.h>
int main()
{
    char a[]={"好好学习  天天向上"};
    char b[]={"########  ########"};
    int left=0;
    int right=strlen(b)-1;
    //printf("%d\n",strlen(a));
    //printf("%d\n",strlen(b));
    //printf("%d\n",sizeof(a));
    //printf("%d\n",sizeof(b));
    //printf("%d\n",length(a));
   // printf("%d\n",length(b));
    while(left<=right)
    {
    b[left]=a[left];
    b[right]=a[right];
    if(left%2==1)
    printf("%s\n",b);
    left=left+1;
    right=right-1;
    Sleep(500);
    system("cls");
    }

    return 0;
}
