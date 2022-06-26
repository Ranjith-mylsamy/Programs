#include<iostream>
using namespace std;
int main()
{
    int i,j,r,n,l;
    cout<<"enter the r value";
    cin>>r;
    cout<<"enter the n value";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<r;i++)
    {
        l=arr[n-1];
        for(j=n-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=l;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}