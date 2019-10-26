#include <bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    vector<int> vec;
    int size;
    cin >> size;
    int numberOfSwaps = 0;
    for(int i = 0; i < size; i++){
        int element;
        cin >> element;
        vec.push_back(element);
    }

    for(int i = 0; i < vec.size() - 1; i++){

        for(int j = 0; j < vec.size() - 1; j++){

            if(vec.at(j) > vec.at(j+1)){
                auto temp = vec.at(j);
                vec.at(j) = vec.at(j + 1);
                vec.at(j + 1) = temp;
                ++numberOfSwaps;
            }
        }
    }
    cout << "Array is sorted in " << numberOfSwaps << " swaps." << endl;
    cout << "First Element: " << vec.at(0) << endl;
    cout << "Last Element: " << vec.at(size - 1) << endl;
    return EXIT_SUCCESS;
}
