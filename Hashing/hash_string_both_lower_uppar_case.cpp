#include <bits/stdc++.h>
using namespace std;

int main() {
    // ex abcdabehf
    string s;
    cin >> s;

    // pre compute 
    int hash[256] = {0};
    for(int i = 0; i<s.size(); i++) {
        hash[s[i]]++; // auto cast in int as ascii value
    }
    // ex 5 - a g h b c
    int query;
    cin >> query;
    while(query--) {
        char c;
        cin >> c;
        // fetch
        cout << hash[c] << endl;
    }
}