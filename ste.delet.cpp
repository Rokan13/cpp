#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>num;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        num.insert(x);
    }
    for(auto a: num){
        cout<<a<<" ";
    }
    int del;
    cin>>del;
    num.erase(del);

    for(auto b:num)
    {
        cout<<b<<" "<<endl;
    }
}
