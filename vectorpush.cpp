
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char>vec;
    cout<<"Size ="<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(25);
    vec.push_back(25);
    cout<<"after pushback= "<<vec.size()<<endl;
    vec.pop_back();
    for(int vect: vec)
    {
        cout<<vect<<endl;
    }
}
