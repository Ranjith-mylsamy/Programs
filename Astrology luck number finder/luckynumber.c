#include<stdio.h>
int total(int sum)
{
    int total_sum=0,n;
    while(sum>0)
    {
        n=sum%10;
        total_sum+=n;
        sum=sum/10;
    }
    return total_sum;
}
int upward(int i)
{
    int count=0,whole_value,n,num_set_1,num_set_2;
    int initial_value;
    initial_value=i;
    while(i>0)
    {
        n=i%10;
        i=i/10;
        count++;
        if(count==2)
        {
            num_set_1=i;
            whole_value=num_set_1*100;
            num_set_2=initial_value-whole_value;
            if(num_set_1<num_set_2)
            {
                return initial_value;
            }
        }
    }
    
}
int main()
{
    int start,end,i,sum=0,n,num,lucky_num,check;
    printf("Enter the starting range\n");
    scanf("%d",&start);
    printf("Enter the ending range\n");
    scanf("%d",&end);
    printf("Enter your lucky number\n");
    scanf("%d",&lucky_num);
    printf("Enter 1 if you want upward number else 0\n");
    scanf("%d",&check);
    for(i=start;i<=end;i++)
    {
        num=i;
        while(num>0)
        {
            n=num%10;
            sum+=n;
            num=num/10;
        }
        if(sum>=10)
        {
            if(total(sum)==lucky_num)
            {
                if(check==1)
                {
                    if(upward(i)>0)
                    {
                        printf("Lucky numbers:%d\n",i);
                    }
                }
                else
                {
                    printf("Lucky numbers are:%d\n",i);
                }
            }
        }
        if(sum==lucky_num)
        {
            if(check==1)
            {
                printf("Lucky numbers:%d\n",upward(i));
            }
            else
            {
                printf("Lucky number are:%d\n",i);
            }
        }
        sum=0;
    }
    return 0;
}