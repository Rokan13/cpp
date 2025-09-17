
#include <iostream>
using namespace std;

class Number {
    int n;
public:
    void set(int x) { n = x; }
    int get() { return n; }
    void show() { cout << "Number = " << n << endl; }
};

// function that takes an object, squares it, and returns an object
Number square(Number obj) {
    Number temp;
    temp.set(obj.get() * obj.get()); // a*a
    return temp;
}

int main() {
    Number num;            // only one variable

    int x;
    cout << "Enter a number: ";
    cin >> x;
    num.set(x);            // set initial value

    num = square(num);     // pass object & get new object back

    cout << "After squaring: ";
    num.show();

    return 0;
}
