#include<stdio.h>
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    if(n!=0)
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}
int main()
{
    int i,n;
    printf("Enter the value for n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value is %d \n",fibonacci(i));
    }
    return 0;
}