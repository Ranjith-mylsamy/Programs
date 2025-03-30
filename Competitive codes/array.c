#include<stdio.h>
int main()
{
    int array[5]={};
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("-------------------------------------\n");
    for(int i=0;i<=4;i++)
    {
        printf("%d\n",array[i]);
    }
    printf("-------------------------------------");
    return 0;
}