#include<iostream>
using namespace std;

class person{
private:
    string name;
    int age;
    public:
        person(){name="none";age=00;}

        string getName(){return name;}
        int getAge(){return age;}

        void setName(string n){name=n;}
        void setAge(int a){age=a;}
};
int main()
{
   /* person p1;
    cout<<"Name="<<p1.getName()<<"Age="<<p1.getAge()<<endl;
*/
    person p2;
    p2.setName("rokan");
    p2.setAge(23);

cout<<"Name="<<p2.getName()<<"Age="<<p2.getAge()<<endl;
}
