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
int main()
{
    long int p,q,flag,n,phi;
    printf("Enter first prime numbers\n");
    scanf("%d",&p);
    flag=prime(p);
    if(flag==0)
    {
        printf("It is not a prime number\n");
        exit(1);
    }
    printf("Enter Second prime number\n");
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
    
}