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
	// Sorting using Insertion sort(Inserting elements in their correct position)
	for(int i = 1; i < n; i++){
		int j = i;
		while(arr[j-1] > arr[j] && j > 0){
			swap(arr[j-1],arr[j]);
			j--;
		}
	}
	cout << "Elements after sorting: ";
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
