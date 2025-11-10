
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count=0;
    string st;
    cin>>n >> st;

    for(int i=0;i<n-1;i++){
        if(st[i]==st[i+1])
            count++;
    }
    cout<<count;
}
