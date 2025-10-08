#include<iostream>
using namespace std;

class person{
private:
    string name;
    int id;

public:
    void getinfo()
    {
        cout<<"Name= ";
        cin>>name;
        cout<<"Id= ";
        cin>>id;
    }

    void show()
    {
        cout<<"Name= "<<name<<endl<<"Id= "<<id<<endl;
    }
};

class Employee: public person{
private:
    float salary;
    float bonus;

public:
    void getsalary()
    {
        cout<<"Basic salary= ";
        cin>>salary;
        cout<<"Bonous= ";
        cin>>bonus;
    }
    void show()
    {
        cout<<"Salary= "<<salary<<endl<<"Bonus= "<<bonus<<endl;
    }
    friend float calculatenet(Employee e);
};

float calculatenet(Employee e){

}

int main()
{
    int n=2;
    Employee arr[n];

cout<<"enter a data for "<<n<<" employee"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"\nEmployee"<<endl;
        arr[i].getinfo();
        arr[i].getsalary();

    }
    cout<<"Employee salary details "<<endl;
    cout<<endl;

    for(int i=0;i<n; i++)
    {
        arr[i].show();
        cout<<"  \n";
    }
}
