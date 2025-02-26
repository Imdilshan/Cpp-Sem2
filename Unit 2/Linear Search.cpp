#include <bits/stdc++.h>
using namespace std;

void Search(int n){
	int ar[n], num;
	cout << "Enter Elements of array: ";
	for(int i = 0; i < n; i++){
		cin >> ar[i];
	}
	cout << "Enter Number to Search: ";
	cin >> num;
	for(int i = 0; i < n; i++){
		if(num == ar[i]){
			cout << "Number found at Position: " << i + 1 << endl;
		}
	}
}

int main(){
	cout << "Enter size of array: ";
			int n;
			cin >> n;
			Search(n);
	
	return 0;
}