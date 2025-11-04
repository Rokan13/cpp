#include<bits/stdc++.h>
using namespace std;
int main(){

 int t;
 cin>>t;
   while(t--){
    string st;
    cin>>st;
    int count=st.size()-2;


    if(count<=8){
        cout<<st<<endl;
    }
    else{
     cout<<*st.begin()<<count<<*(st.end() - 1)<<endl;
 }
   }
}
