
#include<iostream>
using namespace std;

struct point{

int x,y;

};
class circle{
int radius;
public:
    void setradius(int r){radius=r;}
    int getradius(){return radius;}
};

int main()
{
    point p={1,2};
    cout<<p.x<<" "<<p.y<<endl;

    circle c;
    c.setradius(10);
    cout<<c.getradius()<<endl;
}
