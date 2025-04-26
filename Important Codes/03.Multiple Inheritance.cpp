#include <iostream>
using namespace std;

class Vehicle {
public:
    void show() {
        cout << "This is a vehicle" << endl;
    }
};

class FourWheeler {
public:
    void disp() {
        cout << "This is a 4-wheeler vehicle" << endl;
    }
};

class Car : public Vehicle, public FourWheeler {
    // Inherits methods from both base classes
};

int main() {
    Car obj;
    obj.show();
    obj.disp(); 
    return 0;
}