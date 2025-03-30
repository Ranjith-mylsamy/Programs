#include<stdio.h>
int main()
{
    int a,b,sum;
    char ch;
    printf("Enter two numbers:\n");
    do
    {
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d\n",sum);
    printf("Press \"Y\" to continue else press \"N\" \n");
    scanf (" %c", &ch);
    }while(ch == 'y' || ch == 'Y');
    return 0;
}