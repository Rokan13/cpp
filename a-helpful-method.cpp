#include<bits/stdc++.h>
using namespace std;
int main()
{
   string st;
   cin>>st;

    st.erase(remove(st.begin(),st.end(),'+'), st.end()); // remove+

    sort(st.begin(),st.end()); //sort element

    for(int i=0;i<st.size(); i++){
        cout<<st[i];
        if( i!=st.size()-1) //if i!=last index
            cout<< '+'; //then print+
    }

}
