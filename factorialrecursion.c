#include<stdio.h>
int multiplenumbers(int n)
{
 if(n>=1)
 {
     return n*multiplenumbers(n-1);
 }
 else
 {
     return 1;
 }
}
int main()
{
 int a;
 printf("Enter the number");
 scanf("%d",&a);
 printf("factorial of %d is %d",a,multiplenumbers(a));
 return 0;
}