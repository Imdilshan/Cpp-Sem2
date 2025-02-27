#include <bits/stdc++.h>
using namespace std;

class employee{
    string name, designation;
    int age;
    float salary;
    public:
    void get(){
        cin >> name;
        cin >> age;
        cin.ignore();
        getline(cin,designation);
        cin >> salary;
    }
    void put(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Designation: " <<  designation << endl;
        cout << "Salary: " << fixed << setprecision(2) << salary <<  endl;
    }
};

int main(){
    int n;
    cin >> n;
    
    vector <employee> e(n);
    for(int i = 0; i < n; i++){
        e[i].get();
    }

    for(int i = 0; i < n; i++){
        cout << "Employee " << i+1 << ":" << endl;
        e[i].put();
        cout << endl;
    }
    return  0;
}