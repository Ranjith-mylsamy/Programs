#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
}; //creating a node
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=100;
    head->link=NULL;
    
    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=101;
    current->link=NULL;
    head->link=current;
    
    current = (struct node *)malloc(sizeof(struct node));
    current->data=102;
    current->link=NULL;
    head->link->link=current;
    
    printf("The values are:\n");
    printf("%d\n%d\n%d\n",head->data,current->data,head->link->data);//note the last points
}