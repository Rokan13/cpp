#include <iostream>
using namespace std;

class samp {
    int a, b, sum;
public:
    void set(int x, int y) {
        a = x;
        b = y;
        sum = a + b;
    }
    void show() {
        cout << "a = " << a << ", b = " << b << ", sum = " << sum << '\n';
    }   //for show a=10,b=20, sum=30
};

// Function that returns object of type samp
samp input() {
    samp t;
    t.set(10, 20);   // fixed values a=10, b=20
    return t;        // <-- function returns object
}

int main() {
    samp ob;
    ob = input();     // <-- function is called here
    ob.show();

    return 0;
}
