#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n;
        int ar[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);

        cout<<ar[n-1]<<endl;
    }

    return 0;
}
