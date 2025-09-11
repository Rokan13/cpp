

#include <iostream>
using namespace std;

class Math {             //Declare class Math
    int a, b, result;
public:
    Math() {             //Default constructor
        a = 0;
        b = 0;
        result = 0;
    }

    void setA(int A) { a = A; }   //Set value of a,b
    void setB(int B) { b = B; }

    int getA() { return a; }
    int getB() { return b; }     //Return value of a,b

    void show() {
        cout << "a = " << a << ", b = " << b  //show a, b, and result
             << ", sum = " << result << endl;
    }

    void calculateSum() {         //Calculate sum of a and b
        result = a + b;
    }
};

  //Function takes a Math object and returns a Math object
  Math compute(Math obj) {         //obj is a copy of the passed object (pass by value)
    obj.calculateSum();
    return obj;                  // ← object is returned here
}

int main() {

     Math ob;   //Passing Object://ob (main-এর object) pass হচ্ছে compute() ফাংশনে।

    ob.setA(10);                    // Set value
    ob.setB(20);
    cout << "A: " << ob.getA() << endl << "B: " << ob.getB() << endl;

     // ← object is passed here (main ob → obj)
     // ← returned object is assigned back to ob
     ob = compute(ob);   //also function call

    cout << "After calculation:" << endl;
    ob.show();
}
