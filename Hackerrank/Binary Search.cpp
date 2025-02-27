#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int key;
    cin >> key;
    
    int l = 0, r = n-1, mid;
    bool flag = false;
    while(l <= r){
        mid = l + (r-l) / 2;
        if(v[mid] == key){
            cout << mid << endl;
            flag = true;
            break;
        }
        else if(v[mid] < key){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    if(!flag){
        cout << "Not found";
    }
    return 0;
}