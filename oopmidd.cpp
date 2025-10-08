#include<iostream>
using namespace std;

class person{

private:
    string name;
    int age;

public:
    void getinfo(){
    cout<<"name= ";
    cin>>name;
    cout<<"Age= ";
    cin>>age;
    }

    void show()
    {
        cout<<"Name= "<<name<<endl<<"Age= "<<age<<endl;
    }
    };
    class member:public person{
private:
    string id;
    int salary;
public:
    void getsalary()
    {
        cout<<"id= ";
        cin>>id;
        cout<<"Salary = ";
        cin>>salary;
    }

    void show()
    {
      cout<<"id= "<<id<<endl<<"Salary= "<<salary<<endl;
    }

    friend float calculate(member m);
    };

    float calculate(member m){
        return m.salary;
    }

    int main()
    {
        int n=2;
        member arr[n];
        cout<<"Enter a data for" <<n<<"Members"<<endl;

        for(int i=0;i<n;i++)
        {
            cout<<"\n"<<endl;
            arr[i].getinfo();
            arr[i].getsalary();
        }


    }
