#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string st[n];
   for(int i=0;i<n;i++){
    cin>>st[i];
   }
   for(int i=0;i<n;i++){
        string s=st[i];
   for(int j=0;j+1<s.size();j=j+2){
    char ch=s[j];
    s[j]=s[j+1];
    s[j+1]=ch;
   }

   cout<<s<<endl;
    }


}
