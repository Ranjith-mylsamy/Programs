#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
}; //creating a node
int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL; //creating head which stores the address of head node

    struct node *current=NULL;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=95;
    current->link=NULL;
    head->link=current; //creating current which stores the address of current into head (address)

    struct node *current2=NULL;
    current2=(struct node*)malloc(sizeof(struct node));
    current2->data=3;
    current2->link=NULL;
    current->link=current2; //creating current2 which stores the address of current2 into current (address)
    printf("The value are:\n");
    printf("%d\n%d\n%d\n",head->data,current->data,current2->data); //inorder to get the value present there
    printf("The address are:");
    printf("%d\n%d\n%d\n%d\n",head,head->link,current->link,current2);
    return 0;
}