#include<iostream>
using namespace std;

class samp{
int i;
public:
    samp(int n){i=n;}
    int get_i(){
    return i;}
};

int sqr_it(samp m)
{
    return m.get_i() * m.get_i();    //return  a integer value
}

int main()
{
    samp a(10);   // a replace with (m)

    cout<<sqr_it(a)<<'\n';

    return 0;
}
