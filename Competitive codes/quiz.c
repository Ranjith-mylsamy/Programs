#include<stdio.h>
int main(){
    int k=10;
    int i=20;
    int *const p=&k;
    const int *q=&k;
    *p = *p+5;
    printf("%p\n",*p);
    //*q=*q+5;
    printf("%p\n",*q);

    //p=&i;
    printf("%d\n",*p);
    q=&i;
    printf("%d\n",*q);
    return 0;
}