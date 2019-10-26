#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> binary;
    vector <int> temp;
    int n, count = 0, result = 0;
    cin >> n;
    while(n != 0)
    {
        binary.push_back(n % 2);
        n = n / 2;
    }
    reverse(binary.begin(), binary.end());
    for(auto j = binary.begin(); j != binary.end(); j++)
    {
        if(*j == 0) {count = 0;}
        else
        { 
            count++;
            result = max(result, count); 
        } 
    }
    cout << result;
    return 0;
}
