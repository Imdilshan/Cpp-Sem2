#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr + n);
	
	int num;
	cout << "Enter number to search: ";
	cin >> num;
	
	int l = 0, r = n-1, mid;
	while(l <= r){
		mid = (l + r) / 2; 
		if(arr[mid] == num){
			cout << arr[mid] << " found at position: " << mid << endl;
			return 0;
		}
		else if(arr[mid] < num){
			l = mid + 1; 
		}
		else{
			r = mid - 1;
		}
	}
	cout << num << " not found." << endl;
	return 0;
}
