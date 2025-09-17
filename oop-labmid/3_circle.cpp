#include <cmath>
#include <iostream>
using namespace std;

 double PI = 3.1416;

class Circle {
private:
	int radius;

public:
	Circle(int r) {
		radius = r;
	}

	void show()
	{
	    cout<<"Radius: "<<radius<<endl;
	}

	double calculate_area() {
		return  PI * radius * radius; }
		double calculate_circum(){
		return  2 * PI * radius;}


	void display() {
		cout << "Area: " << calculate_area() << endl
		     << "Circum: " << calculate_circum() << endl;
	}
};

int main() {
	Circle c(12);


	c.show();
	c.display();
}
