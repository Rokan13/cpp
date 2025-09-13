#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
string s; cin>>s;
cout<< s <<'\n';

bool is_palindrome=true;
int sz=s.size();

for(int i=0,j=(int)s.size()-1;i<=j;i++,j--)
{
    if(s[i]!=s[j]){
        is_palindrome=false;
        break;
    }
}

if(is_palindrome==true)
    cout<<"palindromw"<<endl;
else cout<<"not palindrome\n";

}
