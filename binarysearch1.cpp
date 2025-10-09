#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cout<<"enter array=";
   cin>>n;
   int arr[n];
   for(int i=1;i<=n;i++)
    cin>>arr[i];

   int x;
   cout<<"inter the finding element=";
   cin>>x;

   int l=1;
   int r=n-1;
   while(l<=r)
   {
       int mid=(l+r)/2;
       if(arr[mid]==x)
       {
           cout<<"index of aray= "<<mid<<endl;
           break;

       }
       else if(arr[mid]<x)
        l=mid+1;
       else r=mid-1;
   }
}
