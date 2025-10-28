#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,evencount=0,oddcount=0;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];


            if(arr[i]%2==0)
            {
                 evencount ++;
            }
            else{
                 oddcount ++; }
        }

            if(evencount>0 && oddcount>0){
                sort(arr,arr+n);
            }
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }

cout<<"\n";

    }
}
