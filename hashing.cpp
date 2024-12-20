#include <bits/stdc++.h>
using namespace std;
  // we can declare size of hash array at max 1e6 inside main(otherwise will give segmentation fault) , if bool 1e7
  // in globally we can declare at max 1e7 int, if bool 1e8
int main() {
    // arr[] = 1,3,2,1,3
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    // precompute
    // for example let take 13 size of hash table bec in out inp max will be 12
    // if input if like 1e5 etc we can take size as hash[100001]
    int hash[13] = {0}; // if declare globally everything will be declared 0 no need to initialize as 0
    for(int i = 0; i<n ; i++) {
        hash[arr[i]]++;     //or hash[arr[i]]+=1
        // hash[1] = at 1st index of hash table
        // hash[2] = at 2nd index of hash table
        // hash[1] = at 1st index of hash table ans so on
    }

    int query; // 5 - 1 4 2 3 12
    cin >> query;
    while(query--) {
        int occurrence;
        cin >> occurrence;
        //fetch
        cout << hash[occurrence] << endl;
    }
}