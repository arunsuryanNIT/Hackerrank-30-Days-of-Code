#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n == 1) return 1;
    return n * factorial(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
