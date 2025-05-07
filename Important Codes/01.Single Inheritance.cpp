#include <bits/stdc++.h>
using namespace std;

class vehicle{
public:
	void display(){
		cout << "This is a vehicle" << endl;
	}
};

class car : public vehicle{
	
};

int main(){
	car obj;
	obj.display();
	return 0;
}
