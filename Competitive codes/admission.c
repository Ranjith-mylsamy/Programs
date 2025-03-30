#include<stdio.h>
struct student{
    int Bio,Phy,Eng,Chem,Lang;
    float avg;
}s;
int main()
{
    int total=0;
    printf("Enter student's mark in Bio,Phy,Eng,Chem,Lang\n");
    scanf("%d%d%d%d%d",&s.Bio,&s.Phy,&s.Eng,&s.Chem,&s.Lang);
    total+=s.Bio+s.Phy+s.Eng+s.Chem+s.Lang;
    int cutoff=s.Phy+s.Chem+s.Lang;
    s.avg = (cutoff*100)/300;
    printf("Total = %d\n",total);
    printf("Avgerage = %f\n",s.avg);
    if(total>300 && s.avg >70)
    {
        printf("Eligible for admission\n");
    }
    else
    {
        printf("Not eligible for admission\n");
    }
}