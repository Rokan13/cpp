#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>mark;
    int n, score;

    cout<<"how many student:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"enetr mark of student:"<<i+1<<": ";
        cin>>score;
        mark.push_back(score);
    }

    cout<<"mark entered:";
    for(int x:mark)
    {
        cout<<x<<" ";

    }
    cout<<endl;
}
