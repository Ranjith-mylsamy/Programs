#include<stdio.h>
#include<string.h>
char substring(char string[],char sub[],int p,int j)
{
    int c=0;
    while(c<j)
    {
        sub[c]=string[p+c];
        c++;
    }
    return sub[c]='\0';
}
int main()
{
    char a[1000];
    char b[1000];
    int i,j;
    printf("Enter the char");
    scanf("%s",a);
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
        for(j=0;j<=l-i;j++)
        {
            substring(a,b,i,j);
            printf("%s\n",b);
        }
    } 
}