// WAP to Create a class named Room with three data members length, breadth and height
#include <bits/stdc++.h>
using namespace std;

#define int long long
class Room{
		int length, breadth, height;
		public:
			void get(){
				cin >> length >> breadth >> height;
			}
			int calculateArea(){
				return length * breadth;
			}
			int calculateVolume(){
				return length * breadth * height;
			}
};

signed main(){
	Room r;
	
	r.get();
	int a = r.calculateArea();
	cout << a << endl;
	int b = r.calculateVolume();
	cout << b << endl;
	return 0;
}