/* Author -> highfive */
#include <bits/stdc++.h>
using namespace std;

int main(){

	float avg, sum = 0;
	bool flag = true;
	int ar[5];
	for(int i = 0; i < 5; i++){
		cin >> ar[i];
		sum += ar[i];
		if(ar[i] <= 40){
			flag = false;
		}
		if(ar[i] < 0 || ar[i] > 100){
			cout << "Invalid marks! Marks must be between 0 and 100." << endl;
			exit(0);
		}
	}
	avg = sum / 5;
	cout << fixed << setprecision(2) << avg << endl;
	if(flag){
		cout << "Passed" << endl;
	}
	else{
		cout << "Failed" << endl;
	}
	return 0;
}