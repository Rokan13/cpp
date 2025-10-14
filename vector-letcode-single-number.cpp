#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>num={1,2,3,3,2,1,6,8,9,8,9};
    int n=num.size();
    int single=-1;

    for(int i=0;i<n;i++)
    {
        int count=0;

        for(int j=0;j<n;j++)
        {
            if(num[i]==num[j])
            {
                count++;
            }
        }

        if(count==1)
        {
            single=num[i];
            break;
        }

    }
    cout<<"single number= "<<single<<endl;

}
