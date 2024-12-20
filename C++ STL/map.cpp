#include <bits/stdc++.h>
using namespace std;
// Map stores all values in sorted orders
// storing and fetching - log n  for all cases(best, avg, worst)
int main() {
    int n;
    cin >> n;                             // for making it more faster we can done our pre computation while taking input in array
    int arr[n];                           
                                          // map<int, int> mpp;
    for(int i = 0; i<n; i++) {
        cin >> arr[i];                        
                                          // mpp[arr[i]]++;
    }

    // pre compute
    map<int, int> mpp;
    for(int i = 0; i<n; i++) {
        mpp[arr[i]]++;
    }
    // for iterating the map
    // for(auto it : mpp) {
    //    cout << it.first << " -" << it.second << endl;
    // }

    int query;
    cin >> query;
    while(query--) {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
}