#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <pair<string, string>> vec;
    string name, email;
    for(auto i = 0; i < n; i++){
        cin >> name >> email;
        vec.push_back(pair<string, string>(name, email));
    }
    sort(vec.begin(), vec.end());
    for(auto i = vec.begin(); i != vec.end(); i++){
        if(i->second.find("@gmail.com") != string::npos){
            cout << i->first << endl;
        }
    }
}
