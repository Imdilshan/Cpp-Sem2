#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
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
			return 0;
		}
	}
	cout << "Number Doesn't Exist in the list." << endl;
		
	
	return 0;
}