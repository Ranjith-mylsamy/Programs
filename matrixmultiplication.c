#include<stdio.h>
int main()
{
    int c,r,i,k,j;
    int a[10][10],b[10][10];
    printf("Enter the row\n");
    scanf("%d",&r);
    printf("Enter the column\n");
    scanf("%d",&c);
    printf("Enter the first array elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second array elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int mul[10][10];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }//SAGIYE EN ILAM SAGIYE UN NINAIVUGLAL NEE THURATHIRIYE VAZHIYE UYIR VAZHIYE UN NINIVUGAL ENNAI THURATHRIYE YAARO MANATHILE YENO 
    }
    printf("The array elements are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}