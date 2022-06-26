#include<stdio.h>
int main()
{
    char sub[1000];
    char string[1000];
    int c=0,l,p;
    printf("Enter the string");
    gets(string);
    printf("Enter the position");
    scanf("%d",&p);
    printf("Enter the length");
    scanf("%d",&l);
    while(c<l){
        sub[c]=string[p+c-1];
        c++;
    }
    sub[c]='\0';
    printf("The req string is\" %s\"\n",sub);
    return 0;
}