#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int d1, m1, y1, fine = 1;
    cin >> d1 >> m1 >> y1;
    int d2, m2, y2;
    cin >> d2 >> m2 >> y2;
    if(m1 == m2 && y1 == y2)
    {
        if(d1 > d2)
        fine = 15 * (d1 - d2);
        else fine = 0;
    }
    else if(y1 == y2)
    {
        if(m1 > m2)
        fine = 500 * (m1 - m2);
        else fine = 0;
    }
    else
        if(y1>y2)
            fine=10000;
        else
            fine=0;
    cout << fine;
    return 0;
}
