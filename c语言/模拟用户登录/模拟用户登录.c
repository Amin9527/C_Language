#include<stdio.h>
#include<string.h>
int main()
{
    int j=0,i=0;
    char zm[7],password[7]="961118";
    printf("ÇëÊäÈëÃÜÂë£º ");
    //scanf("%s",zm);
    while(j<3)
    {
            scanf("%s",zm);
        if(strcmp(zm,"961118")==0)
        {
            printf("µÇÂ½³É¹¦£¡");
            break;
        }
        else
        {
            j++;
            if(j<3)
            printf("ÃÜÂë´íÎó£¬ÇëÖØĞÂÊäÈë£¡\n");



        }
    }
    if(3==j)
    {
        printf("µÇÂ¼Ê§°Ü£¡\n");
    }
    return 0;
}
