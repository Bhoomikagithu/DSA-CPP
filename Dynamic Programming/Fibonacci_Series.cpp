#include <bits/stdc++.h>
using namespace std;

// Memoization method
// TC - O(n) (linear pattern, linear tc) coz other need not to compute again so they will show tc of O(1) cnz linear constant call, and rest will call once so no of operation = tc = n 
// SC - O(n) store recursion stack space + O(n) to store array as vector
int f(int n, vector<int> &dp) {
    if (n <= 1) return n;

    if(dp[n] != -1) return dp[n]; // step 3

    return dp[n] = f(n - 1, dp) + f(n - 2, dp); // step 2

}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1); // step 1 (size of dp) initially dp value stored as -1, after computing it wil store ans
    cout << f(n, dp);
}

// Tabulation method
// TC - O(n) no need to compute twice
// SC - O(n) no need to store extra recursion stack space

int main() {
    int n;
    cin >> n;
    vector<int> dp[n+1];

    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}

// to further optimise space
// TC - O(n) , SC - O(1)

int main() {
    int n;
    cin >> n;
    int prev2 = 0;
    int prev = 1;
    for(int i = 2; i <= n; i++) {
        int crr = prev + prev2;
        prev2 = prev;
        prev = crr;
    }
    cout << prev; // coz it will be ans 
}

