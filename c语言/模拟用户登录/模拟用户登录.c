#include<stdio.h>
#include<string.h>
int main()
{
    int j=0,i=0;
    char zm[7],password[7]="961118";
    printf("���������룺 ");
    //scanf("%s",zm);
    while(j<3)
    {
            scanf("%s",zm);
        if(strcmp(zm,"961118")==0)
        {
            printf("��½�ɹ���");
            break;
        }
        else
        {
            j++;
            if(j<3)
            printf("����������������룡\n");



        }
    }
    if(3==j)
    {
        printf("��¼ʧ�ܣ�\n");
    }
    return 0;
}
