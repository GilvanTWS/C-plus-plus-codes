#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, Q, caso =1; 
    vector<int> v, v2;
    while(cin>>N>>Q){
        if(N==0 && Q==0){
            break;
        }
        cout << "CASE# " << caso << ":" << "\n";
        v2.clear();
        v.clear();
        for (int i = 0 ; i <N; i ++){
            int k;
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        
        for (int i = 0; i < Q; i++){
            int k;
            cin >> k;
            v2.push_back(k);
        }
        
        for (int i = 0; i < v2.size(); i++){
            bool found = true;
            //cout << "teste 1" << "\n";
            for (int j = 0; j < v.size(); j++){
                //cout << "teste 2 " << "\n";
                if (v2[i] == v[j]){
                    if (found){ 
                        cout << v[j] << " found at " << j + 1 << "\n";
                        found = false;
                    }
                }
            }
            if(found){
                cout<< v2[i] << " not found" << "\n";
            }
        }
        
        
        caso++;
    }

    return 0;
}