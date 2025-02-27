#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int tc;
    cin >> tc;
    
    bool flag = true;
    while(tc--){
        int op, x;
        cin >> op;
        if(op == 1){
            cin >> x;
            v.push_back(x);
        }
    
        else if (op == 2){
            int pos;
            cin >> x >> pos;
            if (pos < v.size()-1){
                v.push_back(0);
                for(int i = v.size() - 1; i > pos - 1; i--){
                    v[i] = v[i-1];
                } 
                v[pos] = x;
            }
            else{
                flag = false;
            }
        }
    }
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    if (!flag){
        cout << "Invalid position" << endl;
    }
    
    return 0;
}