#include<iostream>
using namespace std;

class human{
private:
    string name;
    int age;
public:
    human(){name="none";age=00;}

    human(string n,int a)
    {
        name=n;
        age=a;
    }

    void setname(string n){name=n;}
    void setage(int a){age=a;}

    string getname(){return name;}
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

    cout<<"Name="<<p.getname()<<endl<<"Age="<<p.getage()<<endl;
}
