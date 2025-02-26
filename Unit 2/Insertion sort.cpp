#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	for(int i = 1; i < n; i++){
		int j = i;
		while(v[j-1] > v[j] && j > 0){
			swap(v[j-1],v[j]);
			j--;
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	
	return 0;
}