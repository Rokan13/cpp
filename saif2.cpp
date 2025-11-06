#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; if(!(cin>>t)) return 0;
    while(t--){
        long long x,y; cin>>x>>y;
        if(x==y || x==y+1 || y==1) cout<<-1<<"\n";
        else if(x<y) cout<<2<<"\n";
        else cout<<3<<"\n";
    }
}
