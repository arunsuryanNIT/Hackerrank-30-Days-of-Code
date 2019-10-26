#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkPrime(int n){
    if(n == 0 || n == 1)
        return false;
    for(auto i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        if (checkPrime(n)){
            cout << "Prime";
        }
        else{
            cout << "Not prime";
        }
        cout << endl;
    }
    return 0;
}
