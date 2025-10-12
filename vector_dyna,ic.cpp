#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>number;
    int num;

    cout<<"enter number(0 to stop): ";
        while(cin>>num && num!=0)
        {
            number.push_back(num);
        }

        cout<<"number entered: ";
        for(int x:number)
            cout<<x<<" ";
        cout<<endl;

}
