#include <stdio.h>
#define max 13
struct polynomial{
    int coeff[max];
    int degree;
}p1,p2;
int main() {
    int i,sum[max];
    printf("--------------------------------------\n");
    printf("FOR POLYNOMIAL ONE:\n");
    printf("Enter the degree of the polynomial one: \n");
    scanf("%d",&p1.degree);
    int j=p1.degree;
    for(i=0;i<=p1.degree;i++)
    {
    printf("Enter the co-efficient: \n");
    printf("Enter the value for degree: %d\n",j--);
    scanf("%d",&p1.coeff[i]);
    }
    printf("--------------------------------------\n");
    printf("FOR POLYNOMIAL TWO:\n");
    printf("Enter the degree for polynomial two: \n");
    scanf("%d",&p2.degree);
    int temp1=p1.degree;
    int temp2=p2.degree;
    int k=p2.degree;
    int flagpolyone=0,flagpolytwo=0;
    for(i=0;i<=p2.degree;i++)
    {
    printf("Enter the co-efficient: \n");
    printf("Enter the value for degree: %d\n",k--);
    scanf("%d",&p2.coeff[i]);
    }
    printf("The sum of the polynomial is: \n");
    for (i=0;i<=p1.degree;i++)
    {
        if(temp1>temp2)
        {
            sum[i] = p1.coeff[i];
            printf("%dx^%d + ",sum[i],temp1--);
            flagpolyone++;  
        }
        else
        {
            if(temp2>temp1)
            {
                sum[i]=p2.coeff[i];
                printf("%dx^%d + ",sum[i],temp2--);
                flagpolytwo++;
            }
            else
            {
                if(flagpolyone>flagpolytwo)
                {
                    sum[i] = p1.coeff[i] + p2.coeff[i-flagpolyone];
                    if(temp1!=0)
                    {
                        printf("%dx^%d + ",sum[i],temp1--);
                        temp2--;
                    }
                    else
                    {
                        printf("%d",sum[i],temp1--);
                        temp2--;          
                    }
                }
                else
                {
                    if(temp2!=0)
                    {
                        sum[i] = p1.coeff[i-flagpolytwo] + p2.coeff[i];
                        printf("%dx^%d + ",sum[i],temp2--);
                        temp1--;
                    }
                    if(temp2==0)
                    {
                        sum[i+1] = p1.coeff[i+flagpolytwo-1] + p2.coeff[i+1];
                        int check = p1.coeff[2];
                        printf("%d",sum[i+1],temp2--);
                        temp1--;         
                    }
                }
            }
        }
    }
    return 0;
}