#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vect={2,3,4,5,6};
    int target=9;
    int n=5;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vect[i]+vect[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        if(!ans.empty())
            break;
    }
    for(int index:ans)
    {
        cout<<index<<" " ;
    }

}
