#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[200000],arr2[200000],arr3[200000],i=0;
    printf("«Î ‰»Î£∫");
    scanf("%s",arr1);
    printf("«Î ‰»Î£∫");
    scanf("%s",arr2);
    //printf("%d\n",sizeof(arr1));
    //rintf("%d\n",strlen(arr1));
    for(i=0;i<=strlen(arr1);i++)
    {
        arr3[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=arr3[i];
    }
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    return 0;
}
