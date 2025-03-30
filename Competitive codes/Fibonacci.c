#include<stdio.h>
int fibonaccinumber(int num)
{
    int a=0,b=1;
    if(num==0)
    {
        return a;
    }
    else if(num==1)
    {
        return b;
    }
    else
    {
        return (fibonaccinumber(num-1) + fibonaccinumber(num-2));
    }
}
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("---------------------------------------\n");
    printf("Result: \n");
    for(int j=0;j<num;j++)
    {
        printf("%d ",fibonaccinumber(j));
    }
    printf("\n");
    printf("---------------------------------------\n");
    return 0;
}