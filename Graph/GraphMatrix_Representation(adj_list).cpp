#include <bits/stdc++.h>
using namespace std;

// For undirected graph
// one based indexing that's why n+1 matrix if 0 based then n*m
// TC - O(n) , space = n*n costly

int main() {
    int n, m;
    cin >> n >> m;
    int adj[n+1][m+1];
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v; // edge b/w u and v
        adj[u][v] = 1; // intersection marked as 1
        adj[v][u] = 1; // reverse intersection also marked as 1
    }

}