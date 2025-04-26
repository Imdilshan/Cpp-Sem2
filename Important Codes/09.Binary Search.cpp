#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr + n);
	
	int input;
	cin >> input;
	
	int l = 0, r = n-1, mid;
	while(l <= r){
		mid = l + r / 2; 
		if(arr[mid] == input){
			cout << arr[mid] << endl;
			return 0;
		}
		else if(arr[mid] < input){
			l = mid + 1; 
		}
		else{
			r = mid - 1;
		}
	}
	cout << input << " not found" << endl;
	return 0;
}