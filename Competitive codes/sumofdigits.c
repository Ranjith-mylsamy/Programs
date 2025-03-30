#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while(num != 0)
    {
    rem=num%10;
    sum+=rem;
    num/=10;
    }
    printf("Sum of the digits:%d\n",sum);
    return 0;
}