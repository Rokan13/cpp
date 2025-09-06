#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={1,2,3,34,4,5,0};

    sort(v.begin(),v.end());
    cout<<"ascending:";
    for(int x:v)
        cout<<x<<" ";

    reverse(v.begin(),v.end());
    cout<<"\nDescending:";
    for(int x:v)
        cout<<x<<" ";

}
