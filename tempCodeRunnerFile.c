#include<stdio.h>
int main (){

float marks,bonus_marks;
char category;
bonus_marks =  5;

printf("Enter the student marks :");
scanf("%f",&marks);
printf("Enter the student's categery :");
scanf("%c",&category);

if(category == 's'){
marks = marks + bonus_marks;
printf("Marks : %f",marks);

}else{
printf("Student mark is : %f",marks);

}
return 0;
}