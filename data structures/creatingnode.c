#include<stdio.h>
#include<stdlib.h>
    struct node {
        int data;
        struct node *link;  //self reference structure
    };
int main()
{
    struct node *head = NULL;   //creating pointer that points struct node
    head=(struct node *)malloc(sizeof(struct node)); //allocates size that is equal to struct node to head
    head->data=45; //arrow allows to assign value to variables that are structure and union
    head->link=NULL;
    printf("%d",head->data);
    return 0;
}