#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;

     int mn=INT_MAX;
    for(int i=0;i<n;i++)

        int e;
        cin>>e;
        e = abs(e);
        mn = min(e, mn);
    }

    cout<<mn<<endl;
}
