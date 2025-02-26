#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	for(int i = 0; i < n; i++){
		int j = i;
		for( j = i; j < n-1; j++){
			if(v[j+1] < v[i]){
				swap(v[j+1],v[i]);
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	return 0;
}