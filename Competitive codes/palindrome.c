#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],rev[100];
    printf("Enter the character:\n");
    scanf("%s",str);
    strcpy(rev,str);
    strrev(rev);
    printf("%s",rev);
    if(strcmp(rev,str)==0)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }
}