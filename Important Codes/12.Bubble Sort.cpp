#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter elements of array: ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	// Sorting using Bubble sort(Comparing 2 adjacent elements)
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout << "Elements after sorting: ";
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
