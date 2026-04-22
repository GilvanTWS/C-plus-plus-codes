#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int testes, hastes;
    cin >> testes;

    for(int i = 0; i < testes; i++){ 
        cin >> hastes;

        vector<int> topo(hastes, 0);
        int count = 1;

        while(true){
            bool colocou = false;

            for(int j = 0; j < hastes; j++){
                if(topo[j] == 0){
                    topo[j] = count;
                    colocou = true;
                    break;
                }

                int soma = topo[j] + count;
                int r = sqrt(soma);

                if(r * r == soma){
                    topo[j] = count;
                    colocou = true;
                    break;
                }
            }

            if(!colocou){
                break;
            }

            count++;
        }

        cout << count - 1 << endl;   
    }

    return 0;
}