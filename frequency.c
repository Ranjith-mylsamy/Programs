#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of inputs");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("%d",length);
    int fr[length];
    int visited=-1;
    for(i=0;i<length;i++)
    {
        int count=1;
        for(j=i+1;j<length;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fr[j]=visited;
            }
        }
        if(fr[i]!=visited)
        {
            fr[i]=count;
        }
    }
    printf("---------------------\n");
    printf("Freqeuncy of elements\n");
    printf("---------------------\n");
        for(i=0;i<length;i++)
        {
            if(fr[i]!=visited)
            {
                printf("%d\t",arr[i]);
                printf("|");
                printf("%d\n",fr[i]);
            }
        }
        return 0;
}