#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n;
    map<int, int> mpp;
    for(int i = 0; i<n; i++) {
        mpp[i]++;
    }
    cout << mpp[0] ;
}