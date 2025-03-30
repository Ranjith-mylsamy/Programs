#include<stdio.h>
int armstrong(int modnum,int count)
{
    int result=1;
    for(int i=0;i<count;i++)
    {
        result*=modnum;
    }
    return result;
}
int main()
{
    long long num,total;
    int count=0;
    printf("Enter the number:\n");
    scanf("%lld",&num);
    long long ognum=num;
    long long ogognum=ognum;
    do
    {
        num /= 10;
        ++count;
    }while(num != 0);
    printf("count:%d\n",count);
    while(ognum !=0 )
    {
    int modnum = ognum % 10;
    total+=armstrong(modnum,count);
    ognum /= 10;
    }
    printf("Total:%d\n",total);
    if(total == ogognum )
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number");
    }
    return 0;
}