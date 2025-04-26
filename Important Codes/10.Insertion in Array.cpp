#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n+1];
	cout << "Enter Elements of array: ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	int pos, x;
	cout << "Enter Position : ";
	cin >> pos;
	cout << "Enter Element : ";
	cin >> x;
	
	for(int i = n; i > pos - 2; i--){
		arr[i] = arr[i-1];
	}
	arr[pos-1] = x;
	cout << "Elements of arrray after Insertion: " << endl;
	for(int i = 0; i < n + 1; i++){
		cout << arr[i] << endl;
	}
	return 0;
}