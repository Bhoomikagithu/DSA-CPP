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
     vector<int> v[No_of_inputs]; // array of vector
     for(int i=0; i<No_of_inputs; i++) {
        int n;
        cin >>n;
        for(int j=0; j<n; j++) { // no of elements in input
            int input;
            cin >> input;
            v[i].push_back(input);
        }
     }
     for(int i=0; i<No_of_inputs; i++) { // to print the whole array
        printVec(v[i]);
     }
}