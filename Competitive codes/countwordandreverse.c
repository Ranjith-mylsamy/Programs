#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int word=0,k=0,prenum=0;
    printf("Enter the sentence not more than 100 characters:\n");
    fgets(str,sizeof(str),stdin);
    int length=strlen(str)-1;
    printf("The length of character is:%d\n",length);
    for(int i=0;i<=length;i++)
    {
        if(str[i]==' ' || str[i] == '\0' || str[i] == '\n')
        {
            word++;
            for(int j=i-1;j>=prenum;j--)
            {
                rev[k]=str[j];
                k++;
            }
            prenum=i+1;
            rev[k++]=' ';
        }
    }
    printf("No of words:%d\n",word);
    for(int i=0;i<k;i++)
    {
        printf("%c",rev[i]);
    }
    return 0;
}