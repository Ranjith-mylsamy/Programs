#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two quadrant values:\n");
    scanf( "%d %d", &a, &b );
    if(a>=0 && b>=0)
    {
        printf("It is in first quadrant\n");
    }
    if(a<=0 && b>=0)
    {
        printf("It is in second quadrant\n");
    }
    if(a<=0 && b<=0)
    {
        printf("It is in third quadrant\n");
    }
    if(a>=0 && b<=0)
    {
        printf("It is in fourth quadrant\n");
    }
}