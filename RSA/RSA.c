/*Terminologies used:
pr=prime
d=decrypt
e=encrypt
phi=Euler totient formula
gcd=greatest common divisor*/
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
    long int p,q,flag,n,phi,i=2,e,d,k=1,d_result[100];
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
    //e value should not be greater than phi
    for(i;i<phi;i++)
    {
        if(phi%i==0)
        {
            continue;
        }
        flag=prime(i);
        if(flag == 1 && i!=p && i != q)
        {
            if(gcd(e,phi)==1)
            {
                e=i;
            }
        }
    }
    printf("the value pf e is:%ld\n",e);
    //value of d
    while(1)
    {
        k = k + phi;
        if(k % e == 0)
        {
            d=k/e;
            d_result[1]=d;
            break;
        }
    }
    //d*e * mod(phi)=1
    d*=e;
    int checker=fmod(d,phi);
    if (checker==1)
    {
        d = d_result[1];
        printf("the value of d is:%ld",d);
    }
    //public key={e,n}
    printf("The public key is:{%ld,%ld}\n",e,n);
    //private kwy={d,n}
    printf("The private key is:{%ld,%ld}\n",d,n);
    
        double msg = 12;
 
    printf("Message data = %lf", msg);
 
    // Encryption c = (msg ^ e) % n
    double c = pow(msg, e);
    c = fmod(c, n);
    printf("\nEncrypted data = %lf", c);
 
    // Decryption m = (c ^ d) % n
    double m = pow(c, d);
    m = fmod(m, n);
    printf("\nOriginal Message Sent = %lf", m);
 
    return 0;
}