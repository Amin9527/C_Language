#include<stdio.h>
int main()
{
    int i;
    printf("ÇëÊäÈë×ÖÄ¸£º\n");
    while((i=getchar())!=EOF)
    {
        if(i>=97 && i<=122)
        {
            i=i-32;
            putchar(i);
        }
        else if(i>=65 && i<=90)
        {
            i=i+32;
            putchar(i);
        }
    }

    return 0;
}
