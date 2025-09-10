#include<iostream>
using namespace std;

class samp{
int i;
public:
    samp(int n)
    {
        i=n;

     cout<<"constructing"<<'\n';
    }
    int geti(){return i;}
    ~samp(){cout<<"destrusting"<<'\n';}


};

int sqrit(samp o)
{
    return o.geti()*o.geti();   // for sqrit
}

int main()
{
    samp a(10);
    cout<<sqrit(a)<<'\n';    // for print value

}
