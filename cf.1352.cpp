#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[5],c =0, p=1;

        while(n>0)
        {
            int d=n % 10;
            if (d!=0)
                {
                a[c++] = d*p;
        }
            n /= 10;
            p *= 10;
        }

    cout << c << endl;
    for (int i=0; i<c; i++)
            cout<<a[i]<<" ";
        cout <<endl;
}

}

