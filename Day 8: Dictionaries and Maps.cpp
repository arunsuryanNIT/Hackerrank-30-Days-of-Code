#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n, i, phonenumber;
    cin >> n;
    map <string, int> contact;
    string name;
    for(i = 0; i < n; i++)
    {
        cin >> name >> phonenumber;
        contact.insert(pair<string, int>(name, phonenumber));
    }
    string query;
    while( cin >> query){
        auto it = contact.find(query);
        
        if ( it != contact.end() ){
            cout << it->first << "=" << it->second << '\n';
        }
        else{
            cout << "Not found" << '\n';
        }
    }
    return 0;
}
