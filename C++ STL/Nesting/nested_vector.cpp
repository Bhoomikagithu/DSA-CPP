#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout << "Size : " << v.size() << endl; // TC of size() O(1)
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " " << endl;
    }
}

int main() {
    int No_of_inputs;
    cin >> No_of_inputs;
     vector<vector<int>> v; // array of vector
     for(int i=0; i<No_of_inputs; i++) {
        int n;
        cin >>n;
        vector<int> temp; // or v.push_back(vector<int> ());
        for(int j=0; j<n; j++) { // no of elements in input
            int input;
            cin >> input;
            temp.push_back(input); // v[i].push_back(input);
        }
        v.push_back(temp); // it will remove
     }
     v[0].push_back(10);
     v.push_back(vector<int> ());
     for(int i=0; i<v.size(); i++) { // to print the whole array
        printVec(v[i]);
     }
     cout << v[0][1];
}

