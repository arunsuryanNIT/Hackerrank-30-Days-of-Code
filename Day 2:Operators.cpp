#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    double meal, tip, tax;
    cin >> meal >> tip >> tax;
    double total = meal + (meal * tip / 100) + (meal * tax / 100);
    cout << round(total);
    return 0;
}
