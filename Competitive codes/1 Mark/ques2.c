#include<stdio.h>
int main()
{
    int i=0,a=0,b;
    for(i=0;i<5;i++)
    {
        a++;
        printf("%d",a);
        if(i==3)
        {
            printf("%d",i);
            break;
        }
        printf("%d",i);
    }
}