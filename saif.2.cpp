#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int step=0;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x%2==0 && y%2==0) //even=even
            {
                if(x>y){
          step=3; }

            if(y>x){
                step=2;
            }
        }

    else if(x%2!=0 && y%2!=0) //odd=odd
        {
        if(x==y || x>y){
            step=-1;
        }
        if(y>x){
            step=2;
        }
    }
    else if(x%2==0 && y%2!=0) //even=odd
    {
        if(x>y){
            step=-1;
        }
       if(y>x){
        step=2;
       }
    }
    else if(x%2!=0 && y%2==0) //odd=even
    {
        if(x>y){
            step=-1;
        }
        if(y>x){
            step=2;
        }
    }

    cout<<step<<endl;
}
cout<<"\n";
}
