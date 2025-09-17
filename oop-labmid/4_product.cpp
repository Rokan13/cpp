#include <iostream>
using namespace std;

class Product {
private:
	string product_name;
	int    product_id;
	double price;

public:
	Product() {
	    product_name="unknown";
	    product_id=0;
	    price=0;
	}


	Product(string s, int pid, double p)
    {
         product_name=s; product_id=pid; price=p;
	}
	~Product() {
		cout << product_name << ' ' << "destroyed." << endl;
	}

	void set(string s, int pid, double p) {
		product_name = s;
		product_id   = pid;
		price        = p;
	}

	void display() {
		cout << "Product: " << product_name << endl
		     << "ID: " << product_id << endl
		     << "Price: " << price << endl;
	}
};

int main() {
	Product p1("Book", 12, 129.12);
	p1.display();

	Product p2;
	p2.set("Pen", 11, 10.14);
	p2.display();
}
