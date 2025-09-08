#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int mark1, mark2, mark3;


    Student(string s, int r, int m1, int m2, int m3) {
        name = s;
        roll = r;
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
    }

    void display() {
        int total = mark1 + mark2 + mark3;
        double average = (double) total / 3;

        cout << "Marks for " << name << " (" << roll << ")\n";
        cout << "Total: " << total << "\n";
        cout << "Average: " << average << "\n\n";
    }
};

int main() {
    Student s1("Rokan", 43, 11, 12, 13);
    Student s2("Sakin", 67, 14, 15, 16);

    s1.display();
    s2.display();
}
