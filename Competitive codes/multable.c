#include<stdio.h>
int main()
{
    int num,result=0;;
    printf("Enter the multiplication table number:\n");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        result+=num;
        printf("%d * %d = %d\n",i,num,result);
    }
}