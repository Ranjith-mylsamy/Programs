/* 
N Queen Problem 
main()  --> n  --> nXn 
queen() --> place queen(Recursion)
safe()  --> safe or not
print() --> print the soln
*/
#include<stdio.h> 
#include<stdlib.h>
int c=0;
void print(int **arr,int n)
{
    int i,j; 
    printf("\n%d\n",++c);
    for(i=0;i<n;i++,printf("\n"))
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]==1)
              printf("Q ");
            else 
              printf("- ");
              
        }
    }
    printf("\n\n");
}
int safe(int **arr,int row,int col,int n)//r=3  c=4
{  
    int i,j;
   for(i=row;i>=0;i--)  //top
     if(arr[i][col]==1)
       return 0;
   for(i=row,j=col;i>=0 && j<n;i--,j++) //right
      if(arr[i][j]==1)
        return 0;
   for(i=row,j=col;i>=0 && j>=0;i--,j--)  //left
     if(arr[i][j]==1)
       return 0;
    return 1;   
}
void queen(int **arr,int row,int n) 
{ 
    int col;
   if(row==n)  
     print(arr,n);
   else 
   {
      for(col=0;col<n;col++)  
      {
            if(safe(arr,row,col,n)==1)
            {
                arr[row][col]=1;  
                queen(arr,row+1,n);
                arr[row][col]=0;
            }
      }
    }
}
int main()
{
    int n;
    printf("Enter the size of chess board\n");
    scanf("%d",&n); 
    int **arr,i,j;
    arr=(int**)calloc(n,sizeof(int*));
    for(i=0;i<n;i++)
    arr[i]=(int*)calloc(n,sizeof(int));
    queen(arr,0,n);   
}
