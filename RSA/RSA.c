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
    long int p,q,flag,n,phi,i=2,e,d,k=1,d_result[100],m[3072],en[3072],de[3072],temp[3072];
    char msg[3072],original_msg[3072];
    int choice;
    printf("Enter first odd prime numbers\n");
    scanf("%ld",&p);
    flag=prime(p);
    if(flag==0)
    {
        printf("It is not a prime number\n");
        exit(1);
    }
    printf("Enter Second odd prime number\n");
    scanf("%ld",&q);
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
    printf("the value of e is:%ld\n",e);
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
        printf("the value of d is:%ld\n",d);
    }
    //public key={e,n}
    printf("The public key is:{%ld,%ld}\n",e,n);
    //private kwy={d,n}
    printf("The private key is:{%ld,%ld}\n",d,n);
    
    printf("Enter 1 or 2 for string and integer encryption respectively\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        goto choice1;
    }
    else
    {
        goto choice2;
    }

    
    choice1:
    printf("Enter message to encrypt & decrypt\n");
    scanf("%s",&msg);
    for(i=0;msg[i]!=NULL;i++)
    {
        m[i]=msg[i];
        original_msg[i]=msg[i];
    }
    // long int pt,ct,len;
    // i=0;
    // len=strlen(msg);
    // printf("%ld\n",len);
    long int pt,ct,len;
    i=0;
    len=strlen(msg);
    while(i!=len)
    {
        pt=m[i];
        pt=pt-96;
        k=1;
        for(int j=0;j<e;j++)
        {
            k=k*pt;
            k=k%n;
        }
        temp[i]=k;
        ct=k+96;
        en[i]=ct;
        i++;
    }
    en[i]=-1;
    printf("Encrypted message is:");
    for(i=0;en[i]!=-1;i++)
    {
        printf("%c",en[i]);
    }
    i=0;
    while(en[i]!=-1)
    {
        ct=temp[i];
        k=1;
        for(int j=0;j<d;j++)
        {
            k=k*ct;
            k=k%n;
        }
        pt=k+96;
        m[i]=pt;
        i++;
    }
    m[i]=-1;
    printf("Decrypt message is:\n");
    for(i=0;m[i]!=-1;i++)
    {
        printf("%c",m[i]);
    }
    exit(0);
    
    choice2:;
    
    double message;
    printf("Enter a number smaller than %ld\n",n);
    scanf("%lf",&message);
    if(message>n)
    {
        printf("Enter the correct value\n");
        exit(0);
    }
    else{
    printf("Message data = %lf",message);
    double en_data = pow(message, e);
    en_data = fmod(en_data, n);
    printf("\nEncrypted data = %lf\n",en_data);
    double de_data = pow(en_data, d);
    de_data = fmod(de_data, n);
    printf("\nOriginal Message Sent = %lf", de_data);
    }
    return 0;
}
