#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0;


    for(int i=0; i<n ;i++)
    {
        cin>>arr[i];

    }
        for(int i=0;i<n;i++){
                 int j;
                for( j=0;j<n;j++)
               {
            if(arr[i]==arr[j])
            {

                break;
            }
        }
        if(j==i) {
            count ++;
        }
    }
    cout<<count;

}
