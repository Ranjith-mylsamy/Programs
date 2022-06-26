#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The value after swapping of a is %d and b is %d \n",a,b);
}
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("The value before swapped of a is %d and b is %d\n",a,b);
    swap(a,b);
    return 0;
}