#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int It_r = 1; It_r <= 10; It_r++)
    {
        cout << n << " x " << It_r << " = " << n * It_r << "\n";
    }
    return 0;
}
