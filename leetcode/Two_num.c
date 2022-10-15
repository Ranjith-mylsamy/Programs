#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int target,arraypositionone,arraypositiontwo;
    int no,n,i,j;
    int nums[10];
    printf("Enter the no.of input numbers");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("Enter the target:\n");
    scanf("%d",&target);
    for(i=0;i<=no;i++)
    {
        for(j=0;j<=no;j++)
        {
            int result=nums[i]+nums[j];
            if(result==target)
            {
                arraypositionone=i+1;
                arraypositiontwo=j+1;
                break;
            }
        }
    }
    printf("The location is:%d,%d",arraypositionone,arraypositiontwo);
    return 0;
}