//pre increment
#include<bits/stdc++.h>
using namespace std;

class student{
private:
    string name;
    int age;
public:
    student(){
    name=" ";
    age=0;
    }
    void setName(string n)
    {
        name=n;
    }
    void setAge(int a){
    age=a;
    }
    void show()
    {
        cout<<"Name= "<<name<<endl<<"Age= "<<age<<endl;
    }
    student operator++()
    {
        this->age++;
        return *this;
    }

};

int main()
{
    student s1;
    s1.setName("Noman");
    s1.setAge(10);
    s1.show();

    cout<<"\nAfter pre increment"<<endl;
    ++s1;
    s1.show();



}
