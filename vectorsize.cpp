#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;



    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(34);
    /*v.push_back(56);*/
    cout<<"vector after push_back:"<<endl;

    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"after push: size="<<v.size()<<",capacity= "<<v.capacity()<<endl;

    v.pop_back();

    cout<<"vector after pop_back:";
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
     cout<<"after pop: size="<<v.size()<<",capacity= "<<v.capacity()<<endl;
}
