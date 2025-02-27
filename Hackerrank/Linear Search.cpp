#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int x;
    cin >> x;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(x == v[i]){
            cout << i ;
            flag = true;
        }
    }
    
    if(!flag){
        cout << "Not found";
    }
    
    return 0;
}