#include<stdio.h>
int main()
{
    int a,b,result=0;
    printf("Enter the Number:\n");
    scanf("%d",&a);
    printf("Enter the repetition number:\n");
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        result+=a;
    }
    printf("ANS:%d",result);
}