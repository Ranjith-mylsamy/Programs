#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int prime(long int pr)
{
    int j=pr/2;
    for(int i=2;i<=j;i++)
    {
        if(pr%2==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int gcd(long int num1,long int num2)
{
    for(int i=1;i<=num1 && i<=num2;++i)
    {
        if(num1%i==0 && num2%i==0)
        {
            long int result=i;
            return result;
        }
    }
}
int main()
{
    long int p,q,flag,n,phi,e=2;
    printf("Enter first odd prime numbers\n");
    scanf("%d",&p);
    flag=prime(p);
    if(flag==0)
    {
        printf("It is not a prime number\n");
        exit(1);
    }
    printf("Enter Second odd prime number\n");
    scanf("%d",&q);
        flag=prime(q);
    if(flag==0)
    {
        printf("It is not a prime number\n");
        exit(1);
    }
    //formula
    n=p*q;
    phi=(p-1)*(q-1);
    //printf("%ld",phi);
    for(e;e<phi;e++)
    {
        if(gcd(e,phi)==1)
        {
            break;
        }
    }
    printf("the value of e is:%ld",e);
}