#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    
    while (cin >> T) {
        
        stack<int> S;
        queue<int> Q;
        priority_queue<int> pq;
        bool stacksus = true, queuesus = true, pqsus = true; //amogus

        for (int i = 0; i < T; i++) {
            int op;
            int x;
                
            cin >> op >> x;

            if (op == 1){
                S.push(x);
                Q.push(x);
                pq.push(x);
            }
            else if(op == 2){
                if (stacksus == true){      // stack checagem
                    if (S.empty() == true || S.top() != x){ 
                        stacksus = false;
                    }
                    else {
                        S.pop();
                    }
            }
                if (queuesus == true){      // queue checagem
                    if (Q.empty() == true || Q.front() != x){ 
                        queuesus = false;
                    }
                    else {
                        Q.pop();
                    }
            }
                if (pqsus == true){     // prioriti checagem
                    if (pq.empty() == true || pq.top() != x){
                        pqsus = false;
                    }
                    else {
                        pq.pop();
                    }
            }

            }
        }
            if (stacksus == true && queuesus == false && pqsus == false){
                cout << "stack\n";
            }
            else if (stacksus == false && queuesus == true && pqsus == false){
                cout << "queue\n";
            }
            else if (stacksus == false && queuesus == false && pqsus == true){
                cout << "priority queue\n";
            }


            else if (stacksus == false && queuesus == false && pqsus == false){
                cout << "impossible\n";
            }
            else {
                cout << "not sure\n";
            }

    }

return 0;

}