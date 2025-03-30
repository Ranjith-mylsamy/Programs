#include<stdio.h>
int main()
{
int c=5;
printf("%d", ++c + ++c + ++c + c-- + c++ + c++);
getchar();
}