#include<stdio.h>
int main(){
    int *ptr1;
    int **ptr2;
    int x=10;
    printf("The normal value is:%d\n",ptr1); // doubt with ptr and *ptr
    printf("the value is:%p\n",ptr1); //address of ptr1
    ptr1=&x;
    ptr2=&ptr1;
    printf("The value is:%d\n",ptr1); //address of x in terms of integer value
    printf("the value is:%d\n",*ptr1); //value stored in ptr1
    printf("the value is:%p\n",ptr1); //address of ptr1
    printf("the double pointer value is:%d\n",**ptr2); //value stored in ptr2
}