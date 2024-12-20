#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;                             // for making it more faster we can done our pre computation while taking input in array
    int arr[n];                           
    unordered_map<int, int> mpp;
    for(int i = 0; i<n; i++) { // TC - O(n)*O(1) = O(n)
        cin >> arr[i];                        
        mpp[arr[i]]++; // O(1)
    }

    //for iterating the map
    for(auto it : mpp) {
    cout << it.first << " -" << it.second << endl;
    }

    int query;
    cin >> query;
    while(query--) {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
}