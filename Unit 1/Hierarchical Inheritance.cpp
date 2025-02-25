// WAP to demonstrate the concept of Hierarchical Inheritance.
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

class Bike : public Vehicle {
public:
    Bike() {
        cout << "This is a bike" << endl;
    }
};

int main() {
    Car obj1;  
    Bike obj2;
    return 0;
}