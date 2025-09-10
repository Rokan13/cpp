#include<iostream>
using namespace std;

class human{
private:
    string name;
    int age;
public:
    human(){
        name="none"; // use default constructor to set default value
        age=00;}

    human(string n,int a) //paremeterize constructor
    {
        name=n;
        age=a;
    }

    void setname(string n){name=n;}  // when there was a default value, then you can use set function to set new value
    void setage(int a){age=a;}

    string getname(){return name;} // for showing value
    int getage(){return age;}

    void show()
    {

    cout<<"Name="<<name<<"Age="<<age<<endl;
    }
};

int main()
{


    human p;
    p.show();
    p.setname("rokan");
    p.setage(89);

    cout<<"Name="<<p.getname()<<endl<<"Age="<<p.getage()<<endl; // for only show new value or update value
}
