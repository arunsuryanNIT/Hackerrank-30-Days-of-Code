#include <bits/stdc++.h>
using namespace std;
int main(){
    int T, n;
    cin >> T;
    while(T--){
        int highest = INT_MIN, n, k;
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j<= n; j++){
                int val = i&j;
                if(val < k){
                    highest = max(highest, val);
                }
            }
        }
        cout << highest << endl;
    }
}
