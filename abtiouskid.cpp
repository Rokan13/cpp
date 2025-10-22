#include<bits/stdc++.h>
using namespace std;
int main(){

     int ar[10000];
     int n;
     cin>>n;

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
     int mn=INT_MAX;
    for(int i=0;i<n;i++){

        ar[i]=abs(ar[i]);

        if(ar[i]<mn){
            mn=ar[i];
        }
    }

    cout<<mn<<endl;
}
