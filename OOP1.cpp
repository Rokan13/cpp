#include<iostream>
using namespace std;
class Human
{
private:
   string name,color;
   int age;
   float id,weight;

   public:
       Human(){
       name="unon";
       age=0;
       color="unon";
       id=0.0;
       weight=0.0;
       }

       void setName(string n){name=n;}
       void setId(float i){id=i;}
       void setAge(int a){age=a;}
       void setColor(string c){color=c;}
       void setWeight(float w){weight=w;}


       string getName(){return name;}
       string getColor(){return color;}
       int getAge(){return age;}
       float getId(){return id;}
       float getWeight(){return weight;}

};

int main()
{
    Human p;
    cout<<"Show default value"<<endl;
    cout<<"Name="<<p.getName()<<endl;
    cout<<"Age="<<p.getAge()<<endl;
    cout<<"Color="<<p.getColor()<<endl;
    cout<<"Id="<<p.getId()<<endl;
    cout<<"Weight="<<p.getWeight()<<endl;

    cout<<"Show real values"<<endl;
    p.setName("Shah Rokan");
    p.setId(043);
    p.setColor("brown");
    p.setAge(21);
    p.setWeight(62);



    cout<<"Name="<<p.getName()<<endl;
    cout<<"Age="<<p.getAge()<<endl;
    cout<<"Color="<<p.getColor()<<endl;
    cout<<"Id="<<p.getId()<<endl;
    cout<<"Weight="<<p.getWeight()<<endl;

}
