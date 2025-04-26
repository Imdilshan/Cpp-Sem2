#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 1; i < n; i++){
		int j = i;
		while(arr[j-1] > arr[j] && j > 0){
			swap(arr[j-1],arr[j]);
			j--;
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
