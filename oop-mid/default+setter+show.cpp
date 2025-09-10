#include<iostream>
using namespace std;

class person{
private:
    string name;
    int age;
    public:
        person(){name="none";age=00;} //just use dafault constructor and seta new value

        string getName(){return name;}
        int getAge(){return age;}

        void setName(string n){name=n;}
        void setAge(int a){age=a;}
};
int main()
{
  
    person p2;
    p2.setName("rokan");  //set value
    p2.setAge(23);

cout<<"Name="<<p2.getName()<<"Age="<<p2.getAge()<<endl; //print or get new value
}
