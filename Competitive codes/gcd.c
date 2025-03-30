#include<stdio.h>
int main()
{
    int num1,num2,i,gcd;
    printf("Enter num1 and num2:\n");
    scanf("%d\n%d",&num1,&num2);
    for(i=1;i<=num1 && i<=num2;++i)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
}