#include<stdio.h>
struct student{
    int Bio,Phy,Eng,Chem,Lang;
    float percentage;
}s;
int main()
{
    int total=0;
    printf("Enter student's mark in Bio,Phy,Eng,Chem,Lang\n");
    scanf("%d%d%d%d%d",&s.Bio,&s.Phy,&s.Eng,&s.Chem,&s.Lang);
    total+=s.Bio+s.Phy+s.Eng+s.Chem+s.Lang;
    s.percentage = (total*100)/500;
    printf("Total = %d\n",total);
    printf("Percentage = %f\n",s.percentage);
    if(s.percentage>=90)
    {
        printf("Grade = O");
    }
    if(s.percentage>=80 && s.percentage<=90)
    {
        printf("Grade = A+");
    }
    if(s.percentage>=70 && s.percentage<=80)
    {
        printf("Grade = A");
    }
    if(s.percentage>=60 && s.percentage<=70)
    {
        printf("Grade = B");
    }
    if(s.percentage>=50 && s.percentage<=60)
    {
        printf("Grade = C");
    }
    if(s.percentage<=50)
    {
        printf("Grade = D");
    }
}