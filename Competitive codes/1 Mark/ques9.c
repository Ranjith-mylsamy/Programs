#include<stdio.h>
int main()
{
    unsigned int a = -1;
    int b=~0;
    if(a!=b)
    {
        printf("Not equal");
    }
    else
    {
        printf("%u\n",a);
        printf("%d\n",b);
        printf("Equal");
    }
    return 0;
}

// unsigned int a=1;
// int b=1;

    // unsigned int a = -1;
    // int b=1;