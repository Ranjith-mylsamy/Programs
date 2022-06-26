#include<stdio.h>
void fun(int n)
{
    if(n==1)
    {
        printf("%d",n);
    }
    else{
        fun(n-1);
        printf("%d",n);
        fun(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the value for n:\n");
    scanf("%d",&n);
    fun(n);
}