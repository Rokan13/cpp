
#include<iostream>
using namespace std;

class person{

private:
    string name;
    int age;
public:
    person()
    {
        name="janina";
        age=420; //default value
    }

    person(string n,int a){name=n;age=a;}//perameterize

     void setName(string n)
    {
        name=n;
    }
    void setAge(int a)
    {
        age=a;
    }

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }




void show()
{
    cout<<"Name="<<name<<endl<<"Age="<<age<<endl; //first part
                                                   // if you need  no returning value then u can use void
}                                                  // and also need to use p1.show with first part
};

int main()
{
    /*person p1;
    cout<<"Default value: "<<endl;  //first part
    p1.show();

    p1.setName("ja issa ti set koro");
    p1.setAge(100);
    cout<<"After set value: "<<endl;
    p1.show();*/
    
    

    person m1;
    cout<<"Default value:"<<endl;
    cout<<"Name: "<<m1.getName() <<endl<<"Age: "<<m1.getAge()<<"\n"; // u can only use second part to print both value

    m1.setName("ja issa ti set koro");
    m1.setAge(100);
    cout<<"After set value: "<<"\n";
    cout<<"Name: "<<m1.getName() <<endl<<"Age: "<<m1.getAge() <<endl;


}
