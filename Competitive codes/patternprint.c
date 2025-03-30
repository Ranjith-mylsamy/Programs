#include<stdio.h>
int main()
{
    int num=0,previousnum=1,result=0;
    while(result<50)
    {
        
        result = num + previousnum;
        num=previousnum;
        previousnum = result;
        if(result<=21)
        {
        printf("%d,",result);
        }
        else if (result<50)
        {
            printf("%d",result);
        }
    }
    return 0;
}