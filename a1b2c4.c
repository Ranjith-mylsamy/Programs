#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char a[1000];
    printf("Enter the pattern");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            int num = a[i+1] - 48;
            for(j=0;j<num;j++)
            {
                printf("%c",a[i]);
            }
            i++;
        }
    }
    return 0;
}