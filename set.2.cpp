#include<bits/stdc++.h>
using namespace std;
int main()
{
    string test="This is a test case";

    set<char>exists;
    for(int i=0;i<test.length();i++){
        char letter=test[i];
        exists.insert(letter);
    }
    for(auto itr=exists.begin();itr!=exists.end();++itr){
        cout<<*itr<<endl;
    }
}
