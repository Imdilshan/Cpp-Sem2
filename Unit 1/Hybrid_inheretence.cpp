// WAP to demonstrate the concept of Hybrid Inheritance.
#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a vehicle" << endl;
    }
};

class FourWheeler : public Vehicle {
public:
    FourWheeler() {
        cout << "This is a four-wheeler vehicle" << endl;
    }
};

class Electric {
public:
    Electric() {
        cout << "This is an electric vehicle" << endl;
    }
};

class Car : public FourWheeler, public Electric {
public:
    Car() {
        cout << "This is a car" << endl;
    }
};

int main() {
    Car obj;
    return 0;
}