#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxindex=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>arr[maxindex]){
            maxindex=i;
        }
    }
    cout<<"max index= "<<maxindex<<endl;
}
