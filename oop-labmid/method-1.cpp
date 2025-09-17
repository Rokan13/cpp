#include <iostream>

using namespace std;
class Truck;
class Car {
    private:
        string name;
        double speed1;

    public:
        Car() {
            speed1 = 0;
        }

        Car(string n, double s) {
            name = n;
            speed1 = s;
        }

        ~Car() {
            //cout << "Car class is getting destructed..." << endl;
        }

        string getName() {
            return name;
        }

        double getSpeed() {
            return speed1;
        }

        void setName(string n) {
            name = n;
        }

        void setSpeed(double s) {
            speed1 = s;
        }

        friend void move(Car c) {
            cout << "Car is moving with " << c.speed1 << "kmph" << endl;
        }

        void race(Truck t);
};

class Truck {
private:
    string name;
    double speed2;

public:
    Truck() {
        speed2 = 0;
    }

    Truck(string n, double p) {
        name = n;
        speed2 = p;
    }

    ~Truck() {
        cout << "Truck class is getting destructed..." << endl;
    }

    string getName() {
        return name;
    }

    double getSpeed() {
        return speed2;
    }

    void setName(string n) {
        name = n;
    }

    void setSpeed(double p) {
        speed2 = p;
    }

    friend void Car::race(Truck t);
};

void Car::race(Truck t) {
    if (speed1 > t.getSpeed()) {
        cout << "Car beats Truck to win the race" << endl;
    }
    else if (speed1 < t.getSpeed()) {
        cout << "Truck beats Car to win the race" << endl;
    }
    else {
        cout << "The race drawn" << endl;
    }
}

/**
 *friend void move(Car c) {
 *    cout << "Car moving with " << c.speed << "kmph" << endl;
 *}
**/

int main() {
    Car c("Toyota", 80);
    //move(c);

    Truck t("Eicher", 60);
    c.race(t);

    return 0;
}
