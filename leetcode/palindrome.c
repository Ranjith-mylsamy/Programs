#include<stdio.h>
int reversefunction(int num)
{
    int currentdigit,prev_revnum=0;
    int rev_num=0;
    while(num!=0)
    {
        currentdigit=num%10;
        rev_num=(rev_num*10)+currentdigit;
        if((rev_num - currentdigit)/10 != prev_revnum)
        {
            printf("overflowed");
            return 0;
        }
        prev_revnum=rev_num;
        num/=10;
    }
    return rev_num;
}
int main(){
    int a;
    printf("Enter the number you want to reverse\n");
    scanf("%d",&a);
    int result=reversefunction(a);
    printf("%d",result);
    return 1;
}