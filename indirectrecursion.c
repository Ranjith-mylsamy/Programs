#include<stdio.h>
void funA(int n)
{
    if(n>0)
    {
        printf("%d",n);
        funB(n-1);
    }
}
void funB(int n)
{
    if (n>1)
    {
        printf("%d",n+1);
        funA(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    funA(n);
}