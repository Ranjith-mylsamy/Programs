#include<stdio.h>
int main()
{
    int *ptr1,var,**ptr2;
    var=30;
    printf("%d\n",var);
    ptr1=&var;
    printf("%d\n",*ptr1);
    ptr2=&ptr1;
    printf("%d\n",**ptr2);
}