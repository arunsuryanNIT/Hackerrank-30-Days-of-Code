#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector <int> vec;
    int element, size, i ,j;
    cin >> size;
    for(i = 0; i < size; i++)
    {
        cin >> element;
        vec.push_back(element);
    }
    i = 0;
    j = vec.size() - 1;
    while(i < j)
    {
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp; 
        i++;
        j--;
    }
    for(i = 0; i < size; i++)
        cout << vec[i] << " ";
   return 0;
}
