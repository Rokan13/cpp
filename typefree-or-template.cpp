#include<iostream>
using namespace std;

template<typename t>
 t add(t a,t b)
 {
     return a+b;
 }

 int main()
 {
     cout<<add(3,4)<<endl;
     cout<<add(3.4,4.7)<<endl;
 }
