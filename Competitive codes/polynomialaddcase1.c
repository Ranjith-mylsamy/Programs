#include <stdio.h>
#define max 10
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
    int l=p2.degree;
    if(p1.degree == p2.degree)
    {
        int k=p2.degree;
        for(i=0;i<=p2.degree;i++)
        {
        printf("Enter the co-efficient: \n");
        printf("Enter the value for degree: %d\n",k--);
        scanf("%d",&p2.coeff[i]);
        }
    }
    else
    {
        printf("The degree of polynomial is not same :( \n");
    }
    printf("The sum of the polynomial is: \n");
    for (i=0;i<=p1.degree;i++)
    {
        sum[i] = p1.coeff[i] + p2.coeff[i];
        if(l!=0)
        {
        printf("%dx^%d + ",sum[i],l--);
        }
        else
        {
        printf("%d",sum[i],l--);           
        }
    }
    return 0;
}