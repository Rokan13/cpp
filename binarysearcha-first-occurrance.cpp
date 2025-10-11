#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Index of array= ";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"write finding number= ";
    cin>>x;

    int l=1,r=n,ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x){
            ans=mid;
        r=mid-1;

        }

    else if(arr[mid]<x){
        l=mid+1;
    }
    else {r=mid-1;}
}
if(ans!=-1)
{
    cout<<"First occurrence index = "<<ans<<endl;
}
else
    cout<<"number not found"<<endl;
}
