#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>vec;
    int val;
    for (int i =0 ; i< n; i++){
        cin >>val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end());
    
    for (int i = 0; i < n; i++){
        if (vec[i] % 2 == 0){
            cout << vec[i] << endl;
        }
    }
    
    for (int i = n - 1; i >= 0; i--){
        if (vec[i] % 2 == 1){
            cout << vec[i] << endl;
        }
    }
    
    return 0;
}