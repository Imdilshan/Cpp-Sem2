#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<pair<string,string>> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i].first >> v[i].second;
	}
	
	sort(v.begin(), v.end());
	string input;
	cin >> input;
	
	int l = 0, r = n-1, mid;
	while(l <= r){
		mid = l + (r-l) / 2; 
		if(v[mid].first == input){
			cout << v[mid].second << endl;
			return 0;
		}
		else if(v[mid].first < input){
			l = mid + 1; 
		}
		else{
			r = mid - 1;
		}
	}
	cout << input << " not found" << endl;
	return 0;
}