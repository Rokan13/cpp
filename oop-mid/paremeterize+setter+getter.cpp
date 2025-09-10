#include<iostream>
using namespace std;

class person{

private:
    string name;
    int age;
public:
    person(string n,int a){name=n;age=a;}//perameterize

/*string getName(){return name;}
int getAge(){return age;}*/
void show()
{
    cout<<"Name="<<name<<"Age="<<age<<endl;
}
};

int main()
{
    person p1("shah rokam", 34);
    p1.show();
   /* person p1("shah rokan",23);
    cout<<"Name="<<p1.getName()<<"Age="<<p1.getAge()<<endl;*/
}
