#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n,m;
    int count=0;
    cin>>n;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(m<=arr[i]){
            count++;
        }


    }
    cout<<count;
}
