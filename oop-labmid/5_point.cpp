#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point() {
	    x=0; y=0;
	}
	Point(int m,int n){x=m; y=n;}

	Point(const Point& p) {
	     x=p.x;  y=p.y;   //copyconstructor
	}

	int getx() {
		return x;
	}

	int gety() {
		return y;
	}


};

int main() {
	Point p1(10, 20);

		cout << "X = " << p1.getx() << endl << "Y = " << p1.gety() << endl;

	Point p2(p1);  //copy

		cout << "X = " << p1.getx() << endl << "Y = " << p2.gety() << endl;
}
