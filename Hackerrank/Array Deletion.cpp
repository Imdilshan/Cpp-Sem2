#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int q;
    cin >> q;
    
    while(q--){
        int a, x, p;
        cin >> a;
        
        if(a == 1){
            cin >> x;
            if(find(v.begin(),v.end(),x) != v.end()){
                v.erase(remove(v.begin(),v.end(),x),v.end());
            }
            else{
                cout << "Value not found" << endl;
            }
        }
        else if(a == 2){
            cin >> p;
            if(p < 0 || p > v.size()){
                cout << "Invalid position" << endl;
            }
            else{
                    v.erase(v.begin()+p);
            }
        }
    }
    
    for(auto x: v){
        cout << x << " ";
    }
    
    return 0;
}