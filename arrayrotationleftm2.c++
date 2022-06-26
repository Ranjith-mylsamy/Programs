#include<iostream>
using namespace std;
int main()
{
    int i,j,r,n,f;
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
        f=arr[0];
        for(j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=f;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}