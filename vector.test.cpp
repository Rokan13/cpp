#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5,5,6};
    int max=v[0];

    for(int x:v)
    if(x<max)
    max=x;

    cout<<"maximum="<<max;

}
