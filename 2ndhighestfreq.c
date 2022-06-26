#include<stdio.h>
int main()
{
int arr[]={1,2,8,2,2,2,2,5,1};
int length=sizeof(arr)/sizeof(arr[0]);
    int max[length];
    max[0]=0;
int fr[length];
int visited=-1;
for(int i=0;i<length;i++){
int count=1;
for(int j=i+1;j<length;j++){
if(arr[i]==arr[j]){
    count++;
fr[j]=visited;

}
}
if (fr[i]!=visited)
fr[i]=count;
}
printf("---------------------\n");
printf("Element|Frequency\n");
printf("---------------------\n");
for(int i=0;i<length;i++)
{
if(fr[i]!=visited)
{
printf("%d",arr[i]);
printf("|");
printf("%d\n",fr[i]);
}
    }
    printf("---------------------\n");
    int k=0;
    for(int i=0;i<length;i++)
    {
    if(fr[i]!=visited)
    {
    if(max[k]<fr[i])
    {
    max[k+1]=fr[i];
    k++;
     }
    }
    }
    int i;
    for(i=0;i>length;i++)
    {
    int count=0;
    if(fr[i]!=visited)
    {
    count++;
    if(count==1)
    {
    break;
    }
    }
    }
    printf("The 2nd max value of arr %d is %d",arr[i],max[k-1]);
    return 0;
}