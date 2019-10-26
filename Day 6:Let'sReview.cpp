#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    { 
        string str;
        cin >> str;
        for(int i = 0; i < str.length(); i++)
        {
            if(i % 2 == 0) cout << str[i];
        }
        cout << " ";
        for(int i = 0; i < str.length(); i++)
        {
            if(i % 2 != 0) cout << str[i];
        }
        cout <<"\n";
    }
   return 0;
}
