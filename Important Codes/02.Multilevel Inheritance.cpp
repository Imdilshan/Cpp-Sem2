#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This is a car" << endl;
    }
};

class SportsCar : public Car {
public:
    SportsCar() {
        cout << "This is a sports car" << endl;
    }
};

int main() {
    SportsCar obj;
    return 0;
}
