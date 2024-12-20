#include <bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &ds, int arr[], int n) {
    if (ind == n) {
        for (int i = 0; i < ds.size(); i++) { // for(auto it : ds) {cout << it << " "}
            cout << ds[i] << " ";
            }
            if(ds.size() == 0) {
                cout << "{}" << endl;
            }
            cout << endl;
            return;
            }
            // Pick the particular index into the subsequence 
            ds.push_back(arr[ind]);
            printF(ind + 1, ds, arr, n);
            ds.pop_back();
            // Not pick or not take condition, this element will not added into subsequence
             printF(ind + 1, ds, arr, n);
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printF(0, ds, arr, n);
}