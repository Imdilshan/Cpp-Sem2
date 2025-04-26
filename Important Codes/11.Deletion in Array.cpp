#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
	int ar[n];
	cout << "Enter Elements of array: ";
	for(int i = 0; i < n; i++){
		cin >> ar[i];
	}
	int pos;
	cout << "Enter Position to delete: ";
	cin >> pos;
		
	for(int i = pos - 1 ; i < n; i++){
		ar[i] = ar[i+1];
	}
	cout << "Elements of array after Deletion: " << endl;
	for(int i = 0; i < n - 1; i++){
		cout << ar[i] << endl;
	}
	
	return 0;
}