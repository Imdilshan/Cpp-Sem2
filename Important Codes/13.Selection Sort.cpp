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
	// Sorting using Selection sort(Swapping after selecting smallest value)
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		swap(arr[i],arr[min]);
	}
	cout << "Elements after sorting: ";
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
