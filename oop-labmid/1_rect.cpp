#include <iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int width;

public:

Rectangle()
	{length=0;
	width=0;}



	void set(int l, int w) {
		length = l;
		width  = w;
	}

	void show()
	{
	    cout<<"Length: "<<length <<endl<<"WIdth:"<<width<<endl;
	}

	int calculate_area() {
		return length * width;
	}

	int calculate_perimeter() {
		return 2 * (length + width);
	}

	void display() {
		cout << "Area: " << calculate_area() << endl
		     << "Perimeter: " << calculate_perimeter() << endl;
	}
};

int main() {
	Rectangle r1;
	r1.set(2, 3);
	/*Rectangle r2;*/
	r1.show();
	/*r2.set(5, 6);*/

	r1.display();
    /*r2.display();*/
}
