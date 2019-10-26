#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector <vector<int> > vec;
    int sum = 0, largest = -63;
    for(int i = 0; i < 6; i++)
    {
        vector <int> temp;
        for(int j = 0; j < 6; j++)
        {
            int element;
            cin >> element;
            temp.push_back(element);
        }
        vec.push_back(temp);
    }
    for(int i = 0; i < vec.size() - 2; i++)
    {
        for(int j = 0; j < vec[i].size() - 2; j++)
        {
            sum = vec[i][j] + vec[i][j+1]  + vec[i][j+2] + vec[i+1][j+1] + vec[i+2][j] + vec[i+2][j+1]  + vec[i + 2][j+2];
            largest = max(largest,sum);
        }
    }
    cout << largest;
   return 0;
}
